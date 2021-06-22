#pragma once
#include <chrono>
class Timer
{
public:
	Timer();
	~Timer();
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
	std::chrono::time_point<std::chrono::high_resolution_clock> end_time;
};

