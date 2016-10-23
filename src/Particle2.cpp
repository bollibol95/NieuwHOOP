#include "Particle2.h"


Particle::Particle(int startX, int startY) {
	radius = ofRandom(2, 20);
	position = ofPoint(startX,
		startY);


	speed = ofVec2f(ofRandom(-2, 2),
		ofRandom(-2, 2));

	innerColour = ofColor(ofRandom(0, 255));
	outerColour = ofColor(ofRandom(0, 255));
	lifetime = 0;
}

Particle::~Particle() {
}

void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
	centerColour = center;
	innerColour = inner;
	outerColour = outer;
}

void Particle::move() {
	position += speed;
	lifetime++;
}


void Particle::draw() {
	//draws particle layers
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}

bool Particle::isDead() {
	return lifetime > MAX_LIFETIME;
}
