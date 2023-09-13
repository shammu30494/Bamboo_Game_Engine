#pragma once

#ifdef BM_PLATFORM_WINDOWS

extern Bamboo::Application* Bamboo::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Bamboo::CreateApplication();
	app->Run();
	delete app;
}

#endif
