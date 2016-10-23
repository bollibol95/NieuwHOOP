#pragma once


#include "Particle2.h"

class ParticleReaper {
public:
	//doesn't change after compiler. 
	const void cleanup(vector<Particle*>& particles);
};

