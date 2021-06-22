#include "Timer.h"
#include <chrono>
#include <iostream>



Timer::Timer()
{
	start_time = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
	end_time = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli>total_time = end_time - start_time;
	std::cout << "Time to compute:" << total_time.count() <<"milli";
}
