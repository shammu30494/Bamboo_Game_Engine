#include "Log.h"

namespace Bamboo {

	std::shared_ptr<spdlog::logger> Log::s_Corelogger;
	std::shared_ptr<spdlog::logger> Log::s_Clientlogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v %$");
		s_Corelogger = spdlog::stdout_color_mt("Bamboo");
		s_Corelogger->set_level(spdlog::level::trace);
		s_Clientlogger = spdlog::stdout_color_mt("App");
		s_Clientlogger->set_level(spdlog::level::trace);
	}

}
