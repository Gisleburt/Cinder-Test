
#pragma once

#include "main.h"

using namespace ci;

Particle::Particle()
{
}

Particle::Particle( Vec2f loc )
{
	mLoc	= loc;
	mDir	= Rand::randVec2f( );
	mVel	= Rand::randFloat( );
	mRadius = 1.0f;
}

void Particle::update()
{
	mLoc = getNewPosition();
}

void Particle::update( const Channel32f &channel ) {
    
	float gray = channel.getValue( mLoc );
	mColor = Color(gray, gray, 1.0f);
    mRadius = gray * 5.0f;

	mLoc = getNewPosition();
}

void Particle::draw()
{
	gl::color( mColor );
	gl::drawSolidCircle( mLoc, mRadius );
}

ci::Vec2f Particle::getNewPosition() {

	ci::Vec2f potentialPosition = mLoc + (mDir * mVel);

	if(potentialPosition.x > 512)
		mDir.x *= -1;
	if(potentialPosition.x < 0)
		mDir.x *= -1;
	if(potentialPosition.y > 512)
		mDir.y *= -1;
	if(potentialPosition.y < 0)
		mDir.y *= -1;
	
	return mLoc + (mDir * mVel);

}