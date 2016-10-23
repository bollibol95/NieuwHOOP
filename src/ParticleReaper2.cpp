#include "ParticleReaper2.h"

void ParticleReaper::cleanup(vector<Particle*>& particles) {
	// delete particle after 30 provided by isDead
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
		if ((*it)->isDead()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}
