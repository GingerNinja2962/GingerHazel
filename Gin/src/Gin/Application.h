#pragma once

#include "Core.h"

namespace Gin {

	class GIN_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	Application* CreateApplication();

}
