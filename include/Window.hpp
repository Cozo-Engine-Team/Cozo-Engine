#pragma once
#include <Engine.hpp>

namespace Engine
{
	class Window
	{
	public:
		static HWND GetWindow(LPCSTR WINDOW_NAME);
		static int GetWindowPosition(POS_TYPE type){glutGet(GLUT_WINDOW_X);}
		static void SetWindowPosition(HWND WINDOW, int x, int y); //
		static void CloseWindow(int WINDOW_ID);
		static void MaximizeWindow(HWND WINDOW);
		static void MinimizeWindow(HWND WINDOW);
		static void CloseProgramm(HWND WINDOW);

	private:


	};
}