#include <Engine.hpp>
#include <time.h>
#include <iostream>
using namespace Engine;

// Function callback that is called to manage the keyboard taks
float r = 0.0f;
float g = 0.0f;
float b = 0.0f;

Cozo *cozo = new Engine::Cozo;
Shapes::BaseLines *lines;
Shapes::Triangle *tri;
Shapes::Square *sqr = new Shapes::Square;
Shapes::Circle *cir = new Shapes::Circle;

float z = 0.0f;

void Keyboard(unsigned char key, int x, int y)
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
	        exit(0);
	        break;
    }
    glutPostRedisplay();

	z += 0.1;

	std::cout << z << std::endl;
}
void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	//lines->display();
	tri->display();
	sqr->setPos(type_x, -1);
	sqr->setPos(type_y, -1);
	sqr->display(r,g,b);
	//glColor3f(1, 1, 1);
	//cir->display(0.5,0.5,1, 10);

	glFlush();
}

void init ()
{
/*
	glClearColor(0.1, 0.39, 0.88, 1.0);
	glColor3f(1.0, 1.0, 1.0);

	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-2, 2, -1.5, 1.5, 1, 40);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0, 0, -3);
	glRotatef(50, 1, 0, 0);
	glRotatef(70, 0, 1, 0);
*/
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition( (glutGet(GLUT_SCREEN_WIDTH)-WINDOW_WIDTH)/2,
                       		(glutGet(GLUT_SCREEN_HEIGHT)-WINDOW_HEIGHT)/2); // the window position
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT); // inits a window of size { width , height}
	glutCreateWindow("Main Functions");

	glutDisplayFunc(display);
    glutKeyboardFunc(Keyboard);
	init();

	glutMainLoop();
}

