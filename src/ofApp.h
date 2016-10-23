#pragma once

#include "ofMain.h"
#include "Particle2.h"
#include "ParticleEmitter2.h"
#include "ParticleReaper2.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
	
private:
	vector<Particle*> particles;

	ParticleEmitter* emitter;
	ParticleReaper reaper;



	
};
