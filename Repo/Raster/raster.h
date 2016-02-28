#ifndef RASTER_H
#define RASTER_H
#include <vector>

// Raster version:
// v1.0: Only solid color, one polygon, scan-line


class raster {
	std::vector<std::vector<bool>> matrix;
	int x, y;
public:
	// Constructor
	raster(polygon pol, unsigned char R,unsigned char G, unsigned char B, unsigned char A);
	
	// Operations
	draw();
};

#endif // RASTER_H
