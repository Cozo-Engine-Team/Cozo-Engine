#pragma once
#include <Engine.hpp>

namespace Engine
{
	class Window
	{
	public:
		Window(char* title, int x, int y, int w, int h);
		~Window();

		static void initWindow() {
			WINDOW_X = (glutGet(GLUT_SCREEN_WIDTH)-WINDOW_WIDTH)/2;
			WINDOW_Y = (glutGet(GLUT_SCREEN_HEIGHT)-WINDOW_HEIGHT)/2;
		}

		static HWND GetWindow(LPCSTR WINDOW_NAME);
		static int  GetWindowPosition(POS_TYPE type);
		static void SetWindowPosition(HWND WINDOW, int x, int y); //
		static void CloseWindow(int WINDOW_ID);
		static void MaximizeWindow(HWND WINDOW);
		static void MinimizeWindow(HWND WINDOW);
		static void CloseProgramm(HWND WINDOW);

	private:
		char* WINDOW_TITLE;
		int WINDOW_X, WINDOW_Y, WINDOW_W, WINDOW_H;

	};
}