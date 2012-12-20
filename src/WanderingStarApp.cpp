
#pragma once

#include "main.h"

using namespace ci;
using namespace ci::app;
using namespace std;


void WanderingStarApp::prepareSettings( Settings *settings ) {
	bool mRenderImage = false;
	bool mRenderParticles = true;
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
	if( mRenderImage )
		gl::draw( myImage, getWindowBounds() );
	if( mRenderParticles )
		mParticleController.draw();
}

void WanderingStarApp::keyDown( KeyEvent event ) {
    if( event.getChar() == '1' ){
        mRenderImage = ! mRenderImage;
    } else if( event.getChar() == '2' ){
        mRenderParticles = ! mRenderParticles;
    }
	else {
		console() << "Key: " << event.getCode() << std::endl;
	}
}

CINDER_APP_BASIC( WanderingStarApp, RendererGl )
