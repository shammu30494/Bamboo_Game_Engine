#pragma once

#ifdef BM_PLATFORM_WINDOWS

extern Bamboo::Application* Bamboo::CreateApplication();

int main(int argc, char** argv)
{
	Bamboo::Log::Init();
	BM_CORE_WARN("Initialized Log!");
	int a = 5;
	BM_INFO("= Log! Var={0}",a);
	auto app = Bamboo::CreateApplication();
	app->Run();
	delete app;
}

#endif
