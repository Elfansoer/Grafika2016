#include "model.h"

// Constructor
model::model() {
	faces();
}

// Member management
void model::add(point3 _v1, point3 _v2, point3 _v3) {
	point3 temp[3];
	temp[0] = _v1;
	temp[1] = _v2;
	temp[2] = _v3;
	faces.push_back(temp);
}

// Operations
void model::move(int dx, int dy, int dz) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].move(dx,dy,dz);
		faces[i][1].move(dx,dy,dz);
		faces[i][2].move(dx,dy,dz);
	}
}
void model::scale(float s) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].scale(s);
		faces[i][1].scale(s);
		faces[i][2].scale(s);
	}
}
void model::scale(float s, int cx, int cy, int cz) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].scale(s,cx,cy,cz);
		faces[i][1].scale(s,cx,cy,cz);
		faces[i][2].scale(s,cx,cy,cz);
	}
}
void model::scale(float s, point3& cp) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].scale(s,cp);
		faces[i][1].scale(s,cp);
		faces[i][2].scale(s,cp);
	}
}
void model::rotate(float t, char dir) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].rotate(t,dir);
		faces[i][1].rotate(t,dir);
		faces[i][2].rotate(t,dir);
	}
}
void model::rotate(float t, char dir, int cx, int cy, int cz) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].rotate(t,dir,cx,cy,cz);
		faces[i][1].rotate(t,dir,cx,cy,cz);
		faces[i][2].rotate(t,dir,cx,cy,cz);
	}
}
void model::rotate(float t, char dir, point3& cp) {
	int i;
	for (i=0;i<faces.size();i++) {
		faces[i][0].rotate(t,dir,cp);
		faces[i][1].rotate(t,dir,cp);
		faces[i][2].rotate(t,dir,cp);
	}
}
