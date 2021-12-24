#include <Shapes.hpp>
#include <Engine.hpp>

Engine::Cozo *cz = new Engine::Cozo;

/*         SHAPES FUNCTIONS        */

void Engine::Shapes::Square::display(float c_r, float c_g, float c_b)
{
	glBegin(GL_QUADS);
		glColor3f(c_r, c_g, c_b); glVertex3f(0 + x ,0 + y,z);
		/*glColor3f(0, 1, 0);*/   glVertex3f(1 + x + w ,0 + y,z);
		/*glColor3f(0, 0, 1);*/   glVertex3f(1 + x + w ,1 + y +h,z);
		/*glColor3f(1, 0, 1);*/   glVertex3f(0 + x ,1 + y +h,z);
	glEnd();
}

void Engine::Shapes::Square::setPos(POS_TYPE type, float value)
{
	switch (type){
		case type_x:
			x = value;
			break;
		case type_y:
			y = value;
			break;
		case type_z:
			z = value;
			break;
		default:
			break;
	}
}


void Engine::Shapes::Triangle::display()
{
	glBegin(GL_POLYGON);
		glColor3f(1, 0, 0); glVertex3f(-x, -y, z);
	    glColor3f(0, 1, 0); glVertex3f(x, -y, z);
	    glColor3f(0, 0, 1); glVertex3f(0, y, z);
	glEnd();
}



void Engine::Shapes::Circle::display(GLfloat x, GLfloat y, GLfloat radius, int slices)
{
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * cz->pi;
	
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= slices;i++) { 
			glVertex2f(
		        x + (radius * cos(i *  twicePi / slices)), 
			    y + (radius * sin(i * twicePi / slices))
			);
		}
	glEnd();
}



void Engine::Shapes::BaseLines::display()
{
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
		for (GLfloat i = -2.5; i <= 2.5; i += 0.25) {
			glVertex3f(i, 0, 2.5); glVertex3f(i, 0, -2.5);
			glVertex3f(2.5, 0, i); glVertex3f(-2.5, 0, i);
		}
	glEnd();
}
/*                                */