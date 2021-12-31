#include <Window.hpp>

Engine::Window::Window(char* title, int x, int y, int w, int h) 
{
	WINDOW_TITLE  = title ;
	WINDOW_X      =     x ;
	WINDOW_Y      =     y ;
	WINDOW_W      =     w ;
	WINDOW_H      =     h ;

	glutInitWindowPosition(WINDOW_X, WINDOW_Y);   // the window position
	glutInitWindowSize(WINDOW_W, WINDOW_H);      //  inits a window of size { width , height}
	glutCreateWindow(WINDOW_TITLE);             //   sets the title of the window
}

HWND Engine::Window::GetWindow(LPCSTR WINDOW_NAME)
{
	return FindWindow(0, WINDOW_NAME);
}

void Engine::Window::CloseWindow(int WINDOW_ID)
{
	glutDestroyWindow(WINDOW_ID);
}

void Engine::Window::GetWindowPosition(POS_TYPE type)
{
	if (type == type_x)
	{
		return glutGet(GLUT_WINDOW_X);
	}
	
	if (type == type_y)
	{
		return glutGet(GLUT_WINDOW_Y);
	}
}

void Engine::Window::SetWindowPosition(HWND WINDOW, int x, int y)
{
	SetWindowPos(WINDOW, NULL, x, y, NULL, NULL, NULL 
	/*
		SWP_NOZORDER|SWP_FRAMECHANGED
	*/
	);
}

void Engine::Window::MaximizeWindow(HWND WINDOW)
{
	ShowWindowAsync(WINDOW, SW_SHOWMAXIMIZED);
}

void Engine::Window::MinimizeWindow(HWND WINDOW)
{
	ShowWindowAsync(WINDOW, SW_SHOWMINIMIZED);
}

void Engine::Window::CloseProgramm(HWND WINDOW)
{
	DestroyWindow(WINDOW);
}