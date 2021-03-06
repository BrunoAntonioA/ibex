/* ============================================================================
 * I B E X - Continuation Tests
 * ============================================================================
 * Copyright   : Ecole des Mines de Nantes and CNRS
 * License     : This program can be distributed under the terms of the GNU LGPL.
 *               See the file COPYING.LESSER.
 *
 * Author(s)   : Gilles Chabert, Alexandre Goldsztejn
 * Created     : Sep 06, 2016
 * ---------------------------------------------------------------------------- */

#ifndef __TEST_CONTINUATION_H__
#define __TEST_CONTINUATION_H__

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "utils.h"

namespace ibex {

class TestCont : public CppUnit::TestFixture {

public:

	CPPUNIT_TEST_SUITE(TestCont);
	CPPUNIT_TEST(test01);
	CPPUNIT_TEST_SUITE_END();

	void test01();
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestCont);


} // end namespace

#endif // __TEST_CONTINUATION_H__
