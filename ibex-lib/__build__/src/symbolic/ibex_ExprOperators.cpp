//============================================================================
//                                  I B E X
// File        : ibex_ExprOperators.cpp
// Author      : Gilles Chabert
// Copyright   : Ecole des Mines de Nantes (France)
// License     : See the LICENSE file
// Created     : Sep 28, 2018
// Last update : Oct 02, 2018
//============================================================================

#include "ibex_ExprOperators.h"
#include "ibex_SyntaxError.h"

#include <sstream>

using namespace std;

namespace ibex {

namespace {
template<class Type>
Type& get(Domain& d);

template<>
Interval& get(Domain& d) { return d.i(); }

template<>
IntervalVector& get(Domain& d) { return d.v(); }

template<>
IntervalMatrix& get(Domain& d) { return d.m(); }

template<class Type>
const Type& get(const Domain& d);

template<>
const Interval& get(const Domain& d) { return d.i(); }

template<>
const IntervalVector& get(const Domain& d) { return d.v(); }

template<>
const IntervalMatrix& get(const Domain& d) { return d.m(); }

typedef struct {
	ExprGenericBinaryOp::dim_func dim;
	ExprGenericBinaryOp::eval_func eval;
	ExprGenericBinaryOp::bwd_func bwd;
	ExprGenericBinaryOp::num_diff_func num_diff1;
	ExprGenericBinaryOp::num_diff_func num_diff2;
	ExprGenericBinaryOp::symb_diff_func symb_diff1;
	ExprGenericBinaryOp::symb_diff_func symb_diff2;
} BinaryOperatorDef;

typedef struct {
	ExprGenericUnaryOp::dim_func dim;
	ExprGenericUnaryOp::eval_func eval;
	ExprGenericUnaryOp::bwd_func bwd;
	ExprGenericUnaryOp::num_diff_func num_diff;
	ExprGenericUnaryOp::symb_diff_func symb_diff;
} UnaryOperatorDef;

template<const char* Name, class Input1, class Input2, class Output>
static Domain eval_binary_domain(const Domain& x1, const Domain& x2) {
	Domain y(BinaryOperator<Name,Input1,Input2,Output>::dim(x1.dim,x2.dim));
	get<Output>(y)=BinaryOperator<Name,Input1,Input2,Output>::fwd(get<Input1>(x1),get<Input2>(x2));
	return y;
}

template<const char* Name, class Input1, class Input2, class Output>
static void bwd_binary_domain(const Domain& y, Domain& x1, Domain& x2) {
	BinaryOperator<Name,Input1,Input2,Output>::bwd(get<Output>(y),get<Input1>(x1),get<Input2>(x2));
}

template<const char* Name, class Input1, class Input2, class Output>
static Domain num_diff1_binary_domain(const Domain& x1, const Domain& x2, const Domain& g) {
	Domain dx1(x1.dim);
	get<Input1>(dx1)=BinaryOperator<Name,Input1, Input2, Output>::diff1(get<Input1>(x1),get<Input2>(x2),get<Output>(g));
	return dx1;
}

template<const char* Name, class Input1, class Input2, class Output>
static Domain num_diff2_binary_domain(const Domain& x1, const Domain& x2, const Domain& g) {
	Domain dx2(x2.dim);
	get<Input1>(dx2)=BinaryOperator<Name,Input1, Input2, Output>::diff2(get<Input1>(x1),get<Input2>(x2),get<Output>(g));
	return dx2;
}

template<const char* Name, class Input, class Output>
static Domain eval_unary_domain(const Domain& x) {
	Domain y(UnaryOperator<Name,Input,Output>::dim(x.dim));
	get<Output>(y)=UnaryOperator<Name,Input,Output>::fwd(get<Input>(x));
	return y;
}

template<const char* Name, class Input, class Output>
static void bwd_unary_domain(const Domain& y, Domain& x) {
	UnaryOperator<Name,Input,Output>::bwd(get<Output>(y),get<Input>(x));
}

template<const char* Name, class Input, class Output>
static Domain num_diff_unary_domain(const Domain& x, const Domain& g) {
	Domain dx(x.dim);
	get<Input>(dx)=UnaryOperator<Name,Input,Output>::diff(get<Input>(x),get<Output>(g));
	return dx;
}

#define ADD_BINARY_OPERATOR(NAME,INPUT1,INPUT2,OUTPUT) \
if (strcmp(op_name,NAME)==0) { \
	def.dim        = &BinaryOperator<NAME,INPUT1,INPUT2,OUTPUT>::dim; \
	def.eval       = &eval_binary_domain<NAME,INPUT1,INPUT2,OUTPUT>; \
	def.bwd        = &bwd_binary_domain<NAME,INPUT1,INPUT2,OUTPUT>; \
	def.num_diff1  = &num_diff1_binary_domain<NAME,INPUT1,INPUT2,OUTPUT>; \
	def.num_diff2  = &num_diff2_binary_domain<NAME,INPUT1,INPUT2,OUTPUT>; \
	def.symb_diff1 = &BinaryOperator<NAME,INPUT1,INPUT2,OUTPUT>::diff1; \
	def.symb_diff2 = &BinaryOperator<NAME,INPUT1,INPUT2,OUTPUT>::diff2; \
	return def; \
}

#define ADD_UNARY_OPERATOR(NAME,INPUT,OUTPUT) \
if (strcmp(op_name,NAME)==0) { \
	def.dim       = &UnaryOperator<NAME,INPUT,OUTPUT>::dim; \
	def.eval      = &eval_unary_domain<NAME,INPUT,OUTPUT>; \
	def.bwd       = &bwd_unary_domain<NAME,INPUT,OUTPUT>; \
	def.num_diff  = &num_diff_unary_domain<NAME,INPUT,OUTPUT>; \
	def.symb_diff = &UnaryOperator<NAME,INPUT,OUTPUT>::diff; \
	return def; \
}

BinaryOperatorDef get_binary_op(const char* op_name) {

	BinaryOperatorDef def;

	ADD_BINARY_OPERATOR(CROSS_PRODUCT,IntervalVector,IntervalVector,IntervalVector);

	stringstream ss;
	ss << "unkown operator \"" << op_name << "\"";
	throw SyntaxError(ss.str());
}


UnaryOperatorDef get_unary_op(const char* op_name) {

	UnaryOperatorDef def;

	ADD_UNARY_OPERATOR(ATANHC,Interval,Interval);
ADD_UNARY_OPERATOR(ATANHCCC,Interval,Interval);
ADD_UNARY_OPERATOR(SINC,Interval,Interval);
ADD_UNARY_OPERATOR(TRACE,IntervalMatrix,IntervalVector);

	stringstream ss;
	ss << "unkown operator \"" << op_name << "\"";
	throw SyntaxError(ss.str());
}

}

const ExprGenericBinaryOp& ExprGenericBinaryOp::new_(const char* op_name, const ExprNode& left, const ExprNode& right) {
	return *new ExprGenericBinaryOp(op_name, left, right);
}

ExprGenericBinaryOp::ExprGenericBinaryOp(const char* op_name, const ExprNode& left, const ExprNode& right) :
		ExprBinaryOp(left, right, get_binary_op(op_name).dim(left.dim,right.dim)), name(strdup(name)) {

	BinaryOperatorDef def=get_binary_op(op_name);
	eval = def.eval;
	bwd = def.bwd;
	num_diff1 = def.num_diff1;
	num_diff2 = def.num_diff2;
	symb_diff1 = def.symb_diff1;
	symb_diff2 = def.symb_diff2;
}

ExprGenericBinaryOp::eval_func ExprGenericBinaryOp::get_eval(const char* name) {
	return get_binary_op(name).eval;
}

ExprGenericBinaryOp::~ExprGenericBinaryOp() {
	free((char*) name);
}

const ExprGenericUnaryOp& ExprGenericUnaryOp::new_(const char* op_name, const ExprNode& expr) {
	return *new ExprGenericUnaryOp(op_name, expr);
}

ExprGenericUnaryOp::ExprGenericUnaryOp(const char* op_name, const ExprNode& subexpr) :
		ExprUnaryOp(subexpr, get_unary_op(op_name).dim(subexpr.dim)), name(strdup(op_name)) {

	UnaryOperatorDef def=get_unary_op(op_name);
	eval = def.eval;
	bwd = def.bwd;
	num_diff = def.num_diff;
	symb_diff = def.symb_diff;
}

ExprGenericUnaryOp::eval_func ExprGenericUnaryOp::get_eval(const char* name) {
	return get_unary_op(name).eval;
}

ExprGenericUnaryOp::~ExprGenericUnaryOp() {
	free((char*) name);
}

} // end namespace
