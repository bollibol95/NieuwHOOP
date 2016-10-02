#pragma once

#include "ofMain.h"
#include "Particle1.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);

	Particle part1;



};
