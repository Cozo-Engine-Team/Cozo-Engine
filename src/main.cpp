#include <Engine.hpp>
#include <time.h>
#include <iostream>
using namespace Engine;

// Function callback that is called to manage the keyboard taks
float r = 1.0f;
float g = 1.0f;
float b = 1.0f;

HWND hThisWnd;
LONG lStyle;

int refreshMillis = 16;

Cozo *cozo = new Engine::Cozo;
Shapes::BaseLines *lines;
Shapes::Triangle *tri= new Shapes::Triangle;
Shapes::Square *sqr = new Shapes::Square;
Shapes::Circle *cir = new Shapes::Circle;

float x = 0.0f, y = 0.0f ;

void keyboard(unsigned char key, int x, int y)
{
    switch (key) {
	    case 'a':// change the actual color to red
	        r = 1.0f;
	        g = 0.0f;
	        b = 0.0f;
	        break;
	    case 'v':// change de color do blue
	        r = 0.0f;
	        g = 0.0f;
	        b = 1.0f;
	        break;
	    case 27:// close the screen
	        glutDestroyWindow(glutGetWindow());
	        exit(0);
	        break;
    }
    glutSwapBuffers();
    glutPostRedisplay();
}

void display() {
    glClearColor( 0, 0, 0, 1 );  // (In fact, this is the default.)
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//lines->display();
	//tri->display();
    glTranslatef(0, 0, 0);
	sqr->setMainPos(-0.5, -0.5, 0);
	sqr->display(r,g,b);
	//glColor3f(1, 1, 1);
	//cir->display(0.5,0.5,1, 10);
	glutSwapBuffers();
}
void init () {glClearColor(0.0, 0.0, 0.0, 1.0);}

void idle ()
{
	//SetWindowPos(hThisWnd, NULL, Input::ScreenMousePos(type_x), Input::ScreenMousePos(type_y), WINDOW_WIDTH, WINDOW_HEIGHT,SWP_NOZORDER|SWP_FRAMECHANGED);
	//ShowWindowAsync(hThisWnd, SW_SHOWMINIMIZED);
	std::cout << Window::GetWindowPosition(type_x) << "\n";
}

void timer(int value)
{
	glutPostRedisplay();
	glutTimerFunc(refreshMillis, timer, 0);
}

int main(int argc, char** argv) {
	cozo->glInit(true , argc, argv);

	initWindow();
	glutInitWindowPosition(WINDOW_X, WINDOW_Y); // the window position
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT); // inits a window of size { width , height}
	glutCreateWindow("Cozo Engine");

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	//glutTimerFunc(0, timer, 0);
	glutIdleFunc(idle);
	init();

  	hThisWnd = FindWindow( 0, "Cozo Engine" );
	/*if( hThisWnd )
	{
		lStyle = GetWindowLong( hThisWnd, GWL_STYLE );
		SetWindowLong( hThisWnd, GWL_STYLE, lStyle & 
			(~(WS_MAXIMIZEBOX|WS_MINIMIZEBOX|WS_SYSMENU|WS_CAPTION|WS_BORDER ) ) );-
	}*/

	glutSetIconTitle("patata");

	glutMainLoop();
}