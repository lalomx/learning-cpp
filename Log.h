#pragma once
enum LogLevel : char 
{
	ERROR,
	WARN,
	INFO
};

class Log {
private:
	LogLevel m_LogLevel = ERROR;
public:
	Log();
	Log(LogLevel level);

	void Error(const char* message);

	void Warn(const char* message);

	void Trace(const char* message);

private:
	void Print(const char* level, const char* message);
};