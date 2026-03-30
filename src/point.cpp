#include "point.hpp"
#include <cmath>
using namespace std;


Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}
double Point::get_x() const {
    return x;
}
double Point::get_y() const {
    return y;
}


double Point::operator-(Point other) const {

    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}
bool Point::operator==(Point other) const {

    if (x == other.x && y == other.y) {
        return true;
    }
    return false;
}
bool Point::operator!=(Point other) const {


    if (x != other.x || y != other.y) {
        return true;
    }
    return false;
}


Point Point::operator/(Point other) const {


    double midX = (x + other.x) / 2.0;

    double midY = (y + other.y) / 2.0;

    return Point(midX, midY);
}
ostream& operator<<(ostream& out, const Point& point) {


    out << "(" << point.get_x() << ", " << point.get_y() << ")";
    return out;

}