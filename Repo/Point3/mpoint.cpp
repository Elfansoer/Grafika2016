#include "point3.h"
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	point3 p1(1,0,0);
	
	cout << "X: " << p1.getX() << ", Y: " << p1.getY() << ", Z: " << p1.getZ() << "\n";
	
	cout << "Scale about 5 times: ";
	p1.scale(5);
	cout << "X: " << p1.getX() << ", Y: " << p1.getY() << ", Z: " << p1.getZ() << "\n";
	return 0;
}
