#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class WSApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void WSApp::setup()
{
}

void WSApp::mouseDown( MouseEvent event )
{
}

void WSApp::update()
{
}

void WSApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( WSApp, RendererGl )
