
#pragma once

#include "main.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class WanderingStarApp : public AppBasic {
	
	protected:
		gl::Texture myImage;
		Channel32f myChannel;
		ParticleController mParticleController;


	public:
		void prepareSettings( Settings *settings );
		void setup();
		void mouseDown( MouseEvent event );	
		void update();
		void draw();

};