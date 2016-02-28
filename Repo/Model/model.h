#ifndef MODEL_H
#define MODEL_H
#include <vector>
#include "point3.h"
/* Version:
- v1.0: Initial build; member, constructor, simple draw

*/


class model {
	std::vector<point3[3]> faces;
public:
	// Constructor
	model();
	
	// Member management
	void add(point3 _v1, point3 _v2, point3 _v3);
	
	// Operations
	void move(int dx, int dy, int dz);
	void scale(float s);
	void scale(float s, int cx, int cy, int cz);
	void scale(float s, point3& cp);
	void rotate(float t, char dir);
	void rotate(float t, char dir, int cx, int cy, int cz);
	void rotate(float t, char dir, point3& cp);
	
	// Graphics related
	//void draw();
};

#endif // MODEL_H
