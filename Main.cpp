#include <iostream> 
#include <cassert>
#include <string>
#include "Class.hpp"

using namespace std;

void test_driver() {
		cout << "Begining tests..." << endl;
	Point loc1 = Point(6, 0);
	Point loc2 = Point(0, 0);
	Point loc3 = Point(2, 5.5);
	Point loc4 = Point(5.5, 5.5);
	Point loc5 = Point(-2, -4);
	Point loc6 = Point(-4, -2);
	Point loc7 = Point(4, 2);

		cout << "\tTesting distance between points" << endl;
	assert((loc1 - loc2) == 6);
	assert((loc2 - loc1) == 6);
	assert((loc3 - loc2) > 5.8523);
	assert((loc3 - loc2) < 5.8524);
	assert((loc4 - loc4) == 0);
	assert((loc4 - loc5) > 12.1037);
	assert((loc4 - loc5) < 12.1038);

		cout << "\tTesting if points are the same location" << endl;
	assert((loc1 == loc2) == false);
	assert((loc2 == loc1) == false);
	assert((loc1 == loc1) == true);
	assert((loc3 == loc4) == false);
	assert((loc6 == loc7) == false);
	assert((loc5 == loc6) == false);

		cout << "\tTesting points are in different locations" << endl;
	assert((loc1 != loc2) != false);
	assert((loc2 != loc1) != false);
	assert((loc1 != loc1) != true);
	assert((loc3 != loc4) != false);
	assert((loc6 != loc7) != false);
	assert((loc5 != loc6) != false);

		cout << "\tTesting where midpoint is" << endl;
	float xm;
	float ym;

	xm = (loc1 / loc2).x;
	ym = (loc1 / loc2).y;
	assert(xm == 3 && ym == 0);

	xm = (loc1 / loc1).x;
	ym = (loc1 / loc1).y;
	assert(xm == 6 && ym == 0);

	xm = (loc3 / loc4).x;
	ym = (loc3 / loc4).y;
	assert(xm == 3.75 && ym == 5.5);

	xm = (loc4 / loc3).x;
	ym = (loc4 / loc3).y;
	assert(xm == 3.75 && ym ==5.5);

	xm = (loc6 / loc7).x;
	ym = (loc6 / loc7).y;
	assert(xm == 0 && ym == 0);

	xm = (loc5 / loc6).x;
	ym = (loc5 / loc6).y;
	assert(xm == -3 && ym == -3);

	cout << "All tests have passed!" << endl;

}

int main() {
	test_driver();

	return 0;
}