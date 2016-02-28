#include <stdlib.h>
#include <unistd.h>
#include <iostream>

#include "line.h"
#include "graphics.h"

int main() {
	int i;
	//system("setterm -cursor off");
	initializeGraphics();
	
	line l1(100,100,300,300);
	l1.draw();
	line l2;
	for(i=0;i<180;i++) {
		l2 = l1.Trotate(3.1415*i/180,200,200).Tmove(i,0);
		drawRectangle(0,0,640,480,0,0,0,255);
		l2.draw();
		printToScreen();
		usleep(100000/6);
	}
	
	/*
	line* l1 = new line(100,100,300,300);
	line* l2 = new line(300,100,100,300);
	drawRectangle(0,0,640,480,0,0,0,255);
	(*l1).draw();
	(*l2).draw();
	sleep(1);
	for (i=0;i<180;i++) {
		(*l1).rotate(3.14/180,200,200);
		(*l2).rotate(3.14/180,200,200);
	drawRectangle(0,0,640,480,0,0,0,255);
		(*l1).draw();
		(*l2).draw();
	printToScreen();
		usleep(100000/6);
	}
	*/
	finalizeGraphics();
	//system("setterm -cursor on");
	return 0;
}
