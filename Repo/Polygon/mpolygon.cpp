#include <stdlib.h>
#include <unistd.h>
#include <iostream>

#include "polygon.h"
#include "graphics.h"

int main() {
	int i;
	//system("setterm -cursor off");
	initializeGraphics();
	polygon pol();
	polygon pol2;
	pol.add(100,100);
	pol.add(100,300);
	pol.add(300,300);
	pol.add(300,100);
	for(i=0;i<180;i++) {
		pol2 = pol.Trotate(3.1415*i/180,200,200);
		drawRectangle(0,0,640,480,0,0,0,255);
		pol2.draw();
		printToScreen();
		usleep(100000/6);
	}
	
	finalizeGraphics();
	//system("setterm -cursor on");
	return 0;
}
