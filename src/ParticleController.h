
#pragma once

#include "main.h"

class ParticleController {
 public:
	ParticleController();
	void update();
	void draw();
	void addParticles( int amt );
	void removeParticles( int amt );
	
	std::list<Particle>	mParticles;
};