#pragma once

#include "Core.h"
namespace Bamboo {

	class BM_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

