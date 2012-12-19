
#pragma once

#include "main.h"

using namespace ci;
using namespace ci::app;
using namespace std;


void WanderingStarApp::prepareSettings( Settings *settings ) {
    settings->setWindowSize( 512, 515 );
    settings->setFrameRate( 60.0f );
}


void WanderingStarApp::setup() {
	myImage = loadImage( loadResource( RES_CI_IMAGE_DANIEL ) ) ;
	//mParticleController.addParticles( 5000 );
	myChannel = Channel32f( myImage );
}

void WanderingStarApp::mouseDown( MouseEvent event ) {
}

void WanderingStarApp::update() {
	mParticleController.update(myChannel);
}

void WanderingStarApp::draw() {
	// clear out the window with black
	gl::clear( ); 
	//gl::draw( myImage, getWindowBounds() );
	mParticleController.draw();
}

CINDER_APP_BASIC( WanderingStarApp, RendererGl )
