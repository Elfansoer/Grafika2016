#include "point.h"
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	point* p1 = new point(10,0);
	int x = (*p1).getX();
	int y = (*p1).getY();
	
	cout << "x: " << x << ", y: " << y << "\n";
	cout << "(x,y): " << "(" << (*p1).getX() << "," << (*p1).getY() << ")\n";
	(*p1).rotate(3.14/2);
	cout << "(x,y): " << "(" << (*p1).getX() << "," << (*p1).getY() << ")\n";
	cout << "x should be 10*cos(3.14/2)-0*sin(3.14/2), that is " << 10*cos(3.14/2)-0*sin(3.14/2) << "\n";
	cout << "y should be 10*sin(3.14/2)+0*cos(3.14/2), that is " << 10*sin(3.14/2)+0*cos(3.14/2) << "\n";
	return 0;
}
