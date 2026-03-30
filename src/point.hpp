#include <iostream>
using namespace std;


class Point {


public: Point(double x, double y);



	 double get_x() const;
	 double get_y() const;
	 double operator-(Point other) const;
	  bool operator==(Point other) const;
	  bool operator!=(Point other) const;
	  Point operator/(Point other) const;


private:



	double x;
	double y;
};
ostream& operator<<(ostream& out, const Point& point);

