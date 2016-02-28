#ifndef POINT3_H
#define POINT3_H
/* Version:
- v1.0: Copied from point.h, added z coordinates

*/

class point {
	int x, y, z;
public:
	// Constructor
	point(int _x, int _y, int _z);
	point() {point(0,0,0);};
	
	// Getter
	int getX();
	int getY();
	int getZ();
	
	// Setter
	void setX(int _x);
	void setY(int _y);
	void setZ(int _y);
	
	// Operations
	void move(int dx, int dy, int dz);
	void scale(float s);
	void scale(float s, int cx, int cy, int cz);
	void scale(float s, point3& cp);
	void rotate(float t);
	void rotate(float t, int cx, int cy, int cz);
	void rotate(float t, point3& cp);
};

#endif // POINT_H
