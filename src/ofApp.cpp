#include "ofApp.h"
// use of const is not really needed since you always use the variables and functions after compiling. I change color because its random etc etc.
void ofApp::setup() {
	//set size, color and curve ratio
	ofBackground(ofColor::black);
	emitter = ParticleEmitter::instance();
	emitter->setOrigin(200, 200);
	emitter->setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));
	emitter->setCurvingParticleRatio(0.1);
}

void ofApp::update() {
	//moves particle to selected position
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}
	//yse numerator for pushback
	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emitter->emit();
		particles.push_back(freshParticle);
	}
	//call reaper cleanup function
	reaper.cleanup(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
	//draw particles 
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}

void ofApp::keyPressed(int key) {
}