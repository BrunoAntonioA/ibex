#include "ibex.h"
#include "ibex_Cont.h"

#include <list>
#include <utility>
#include <cassert>
#include <fstream>

using namespace std;
using namespace ibex;

int main() {
    Function f("x","y","z","(x^2+y^2+z^2-1 ; x+y+z-1)");

    double _x[][2]={{0,0},{0,0},{1,1}};
    IntervalVector start_sol(3,_x);

    Cont cont(f, 1e-3, 0.5, 1.1);

    cont.start(start_sol);

	cont.to_mathematica("data/circle");

}
