#pragma once

#include <Windows.h>
#include <Engine.hpp>
#include <iostream>

namespace Engine
{
	class Input
	{
	public:
		static int ScreenMousePos(POS_TYPE type);

		static int WorldMousePos(POS_TYPE type);

	private:

	};
}