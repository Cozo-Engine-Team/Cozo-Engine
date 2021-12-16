#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <glut.h>
#endif

enum POS_TYPE{type_x,type_y,type_z};

namespace Engine
{

	namespace Shapes
	{

		// damn are you reading this? ... I though that no one will know about this game engine ...
		class BaseLines{
			public:
				void display(); //displays the BaseLines ... the functions are in Shapes.cpp
		};
		class Cube{};
		class Pyramid{};
		class Sphere{};
		class Cyllinder{};
		class Circle{
			public:
				void display(GLfloat x, GLfloat y, GLfloat radius, int slices); //draws the circle .. Shapes.cpp

			private:
		};
		class Square{
			public:
				Square(){}
				~Square(){}
				float posX() { return x; }
				float posY() { return y; }
				void setPos(POS_TYPE type, float value); // setting the position .. Shapes.cpp
				void setMainPos(float x_pos, float y_pos, float z_pos){
					x = x_pos;
					y = y_pos;
					z = z_pos;
				}
				void display(float c_r, float c_g, float c_b);
			private:
				float x = -0.5f;
				float y = -0.5f;
				float z = -1.0f;
				float w = 0.5f;
				float h = 0.5f;
			};
		class Triangle{
			public:
				void display();
			private:
		};
	}
}