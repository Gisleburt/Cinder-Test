
#pragma once

#include "main.h"

using namespace ci;
using std::list;

ParticleController::ParticleController()
{
	int mYRes = 51;
	int mXRes = 51;
	for( int y = 0; y < mYRes; y++ ){
		for( int x = 0; x < mXRes; x++ ){
			addParticle( x, y );
		}
	}

}

void ParticleController::update()
{
	for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
		p->update();
	}
}

void ParticleController::update( const Channel32f &channel )
{
	for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
		p->update(channel);
	}
}

void ParticleController::draw()
{
	for( list<Particle>::iterator p = mParticles.begin(); p != mParticles.end(); ++p ){
		p->draw();
	}
}

void ParticleController::addParticle( int xi, int yi ) {
    float x = ( xi + 0.6f ) * 10.0f;
    float y = ( yi + 0.6f ) * 10.0f;
    mParticles.push_back( Particle( Vec2f( x, y ) ) );
}

void ParticleController::addParticles( int amt )
{
	for( int i=0; i<amt; i++ )
	{
		float x = Rand::randFloat( (float)app::getWindowWidth() );
		float y = Rand::randFloat( (float)app::getWindowHeight() );
		mParticles.push_back( Particle( Vec2f( x, y ) ) );
	}
}

void ParticleController::removeParticles( int amt )
{
	for( int i=0; i<amt; i++ )
	{
		mParticles.pop_back();
	}
}

