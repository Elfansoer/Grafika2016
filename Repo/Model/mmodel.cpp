#include "model.h"

int main() {
	model m();
	point3 p1(1,0,0);
	point3 p2(0,1,0);
	point3 p3(0,0,1);
	
	m.add(p1,p2,p3);
	
	return 0;
}
