#include <iostream>
#include "src/point.hpp"
using namespace std;


int main() {
	Point a(7.7, 6.7);
	Point b(6.9, 69.9);
	cout << "Point a: " << a << endl;
	cout << "Point b: " << b << endl;
	cout << "Distance: " << (a - b) << endl;
	cout << "Midpoint: " << (a / b) << endl;
	return 0;
}

