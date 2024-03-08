#include<iostream>
#include "Class.hpp"

using namespace std;

Point::Point(double xp, double yp) {
	this->x = xp;
	this->y = yp;
}

//Distance between
double Point::operator-(Point loc1) {
	double newx = this->x - loc1.x;
	double newy = this->y - loc1.y;

	double distance = sqrt((newx * newx) + (newy * newy));

	return distance;
}

//Same location
bool Point::operator==(Point loc1) {
	if (this->x == loc1.x && this->y == loc1.y)
	{
		return true;
	}
	return false;
}

//Different location
bool Point::operator!=(Point loc1) {
	if (this->x == loc1.x && this->y == loc1.y)
	{
		return false;
	}
	return true;
}

//mid point between the points
Point Point::operator/(Point loc1) {
	double newx = this->x + loc1.x;
	double newy = this->y + loc1.y;


	return Point((newx / 2), (newy / 2));
}