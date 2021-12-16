#pragma once

///---- Project: Cozo Engine
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

namespace Engine
{
	static int WINDOW_WIDTH = 640;
	static int WINDOW_HEIGHT = 480;
	class Cozo
	{
	public:
		Cozo(){}
		~Cozo(){}
		void cozoInit(bool display, int argc, char **argv);
		void setStyle();
		float Rpi(){ return pi; }
		float pi  = 3.14159265358979323846264338327950288419716939937510;


	private:

	};
}