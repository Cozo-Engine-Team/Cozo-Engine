#include <Engine.hpp>

int Engine::Input::ScreenMousePos(POS_TYPE type) {
	int hi = 0;
	
	POINT p;
	if (GetCursorPos(&p))
	{
		if (type == type_x)
		{
			hi = p.x;
		}
		if (type == type_y)
		{
			hi = p.y;
		}
	}
	return hi;
}

int Engine::Input::WorldMousePos(POS_TYPE type){
	int hi = 0;

	if (type == type_x)
	{
		hi = ScreenMousePos(type_x) - (glutGet(GLUT_SCREEN_WIDTH)-glutGet(GLUT_WINDOW_WIDTH))/2;
	}
	if (type == type_y)
	{
		hi = ScreenMousePos(type_y) - (glutGet(GLUT_SCREEN_HEIGHT)-glutGet(GLUT_WINDOW_HEIGHT))/2;
	}
	return hi;
}