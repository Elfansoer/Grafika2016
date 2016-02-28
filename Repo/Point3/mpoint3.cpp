#include "point3.h"
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	point3 p1(1,0,0);
	
	cout << "X: " << p1.getX() << ", Y: " << p1.getY() << ", Z: " << p1.getZ() << "\n";
	
	cout << "Rotate about (3.1415/2,y): \n";
	p1.rotate(3.1415/2,'y');
	cout << "X: " << p1.getX() << ", Y: " << p1.getY() << ", Z: " << p1.getZ() << "\n";
	return 0;
}
