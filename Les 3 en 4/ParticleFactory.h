#pragma once

#include "Particle.h"
class ParticleFactory
{
public:
	void setOrigin(int x, int y);
	
	void setCurvingParticleRatio(float ratio);

	void setColours(ofColor innerColour, ofColor outColour);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;
};

