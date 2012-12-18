
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
	myImage = gl::Texture( loadImage( loadResource( RES_CI_IMAGE_DANIEL, "IMAGE" ) ) );
}

void WanderingStarApp::mouseDown( MouseEvent event ) {
}

void WanderingStarApp::update() {
}

void WanderingStarApp::draw() {
	// clear out the window with black
	gl::clear( ); 
	gl::draw( myImage, getWindowBounds() );
}

CINDER_APP_BASIC( WanderingStarApp, RendererGl )
