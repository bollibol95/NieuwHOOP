#include "Particle1.h"

Particle::Particle() {
	//radius particle, so size
	radius = ofRandom(5, 20);
	//starting position
	position = ofPoint(ofGetWidth() / 2,ofGetHeight() / 2);
	//moving position
	speed = ofVec2f(ofRandom(-5, 5),0);

	//speed.x = ofRandom(-5,5);
	//speed.y = ofRandom(-5,5);

	innerColour = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	outerColour = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
}


void Particle::setup() {

}

void Particle::move() {
	position += speed;

}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius*0.25);


}
