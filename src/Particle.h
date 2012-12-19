
#pragma once

#include "main.h"

using namespace ci;

class Particle {

	protected:
		ci::Vec2f	mLoc;
		ci::Vec2f	mDir;
		float		mVel;
		float		mRadius;
		Color		mColor;

	public:
		Particle();
		Particle( ci::Vec2f );
		void update();
		void update( const Channel32f &channel );
		void draw();

		ci::Vec2f getNewPosition();
	
};