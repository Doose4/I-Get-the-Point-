

class Point {
public:
	double x = 0;
	double y = 0;


	explicit Point(double x, double y);
	double operator-(Point loc1);
	bool operator==(Point loc1);
	bool operator!=(Point loc1);
	Point operator/(Point loc1);
	
};