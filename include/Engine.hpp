#pragma once

///---- Project: Cozo Engine - 2021
///---- Authors: Cozer


#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES

#include "imgui.h"
#include "imgui_impl_glut.h"
#include "imgui_impl_opengl2.h"
#ifdef __APPLE__
    #include <glut.h>
#else
    #include <freeglut.h>
#endif

#ifdef _MSC_VER
#pragma warning (disable: 4505) // unreferenced local function has been removed
#endif

#include <Shapes.hpp>
#include <Input.hpp>
#include <Window.hpp>

namespace Engine
{
	static int WINDOW_WIDTH = 640;
	static int WINDOW_HEIGHT = 480;

	static int WINDOW_X = 0;
	static int WINDOW_Y = 0;

	static void initWindow() {
		WINDOW_X = (glutGet(GLUT_SCREEN_WIDTH)-WINDOW_WIDTH)/2;
		WINDOW_Y = (glutGet(GLUT_SCREEN_HEIGHT)-WINDOW_HEIGHT)/2;
	}

	class Cozo
	{
	public:
		Cozo(){}
		~Cozo(){}
		void glInit(bool display, int argc, char **argv);
		void init();
		void display();		void setStyle();
		float Rpi(){ return pi; }
		float pi  = 3.14159265358979323846264338327950288419716939937510;


	private:

	};
}