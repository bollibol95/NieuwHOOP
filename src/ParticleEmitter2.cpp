#include "ParticleEmitter2.h"
#include "CurvingParticle2.h"
//if makes one particle emitter
ParticleEmitter* ParticleEmitter::instance() {
	if (!theOnlyOne) {
		theOnlyOne = new ParticleEmitter();
	}
	return theOnlyOne;
}

ParticleEmitter::ParticleEmitter() {
}

Particle* ParticleEmitter::emit() {
	//creates newparticle through function
	Particle* newParticle;
	//creates new curving particle
	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	//creates new normal particle
	else {
		newParticle = new Particle(originX, originY);
	}
	//sets particle color
	newParticle->setColours(ofColor::white, inner, outer);

	return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
	inner = innerColour;
	outer = outerColor;
}

ParticleEmitter* ParticleEmitter::theOnlyOne = 0;
