#include <Window.hpp>

HWND Engine::Window::GetWindow(LPCSTR WINDOW_NAME)
{
	return FindWindow(0, WINDOW_NAME);
}

void Engine::Window::CloseWindow(int WINDOW_ID)
{
	glutDestroyWindow(WINDOW_ID);
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