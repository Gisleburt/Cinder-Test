
#pragma once

#include "main.h"

class Particle {
 public:
	Particle();
	Particle( ci::Vec2f );
	void update();
	void draw();
	
	ci::Vec2f	mLoc;
	ci::Vec2f	mDir;
	float		mVel;
	
	float		mRadius;
};