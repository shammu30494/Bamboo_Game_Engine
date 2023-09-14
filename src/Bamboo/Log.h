#pragma once

#include "Core.h"
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>

namespace Bamboo {
	class BM_API Log
	{
	
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_Corelogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_Clientlogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_Corelogger;
		static std::shared_ptr<spdlog::logger> s_Clientlogger;
	
	};
}

//Core Log macros
#define BM_CORE_ERROR(...) ::Bamboo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BM_CORE_WARN(...)  ::Bamboo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BM_CORE_INFO(...)  ::Bamboo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BM_CORE_TRACE(...) ::Bamboo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BM_CORE_FATAL(...) ::Bamboo::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log macros

#define BM_ERROR(...)      ::Bamboo::Log::GetClientLogger()->error(__VA_ARGS__)
#define BM_WARN(...)       ::Bamboo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BM_INFO(...)       ::Bamboo::Log::GetClientLogger()->info(__VA_ARGS__)
#define BM_TRACE(...)      ::Bamboo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BM_FATAL(...)      ::Bamboo::Log::GetClientLogger()->fatal(__VA_ARGS__)