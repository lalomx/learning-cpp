#include "Log.h"

#include <iostream>


Log::Log()
{
}

Log::Log(LogLevel level)
{
	m_LogLevel = level;
}

void Log::Error(const char* message)
{
	Print("ERROR", message);
}

void Log::Warn(const char* message)
{
	Print("WARN", message);
}

void Log::Trace(const char* message) {
	Print("INFO", message);
}

void Log::Print(const char* level, const char* message)
{
	std::cout << "[" << level << "]: " << message << std::endl;
}