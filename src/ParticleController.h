
#pragma once

#include "main.h"

using namespace ci;

class ParticleController {

	protected:
		std::list<Particle>	mParticles ;

	public:
		ParticleController() ;
		void update() ;
		void update( const Channel32f &channel );
		void draw() ;
		void addParticles( int amt ) ;
		void removeParticles( int amt ) ;
		void addParticle( int xi, int yi ) ;
	
};