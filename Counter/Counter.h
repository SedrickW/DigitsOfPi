#pragma once
class Counter
{
public:

	void Count();
	void Reset();
	 void AddCounts(int counts);
	const int GetCounter();
	

	
private:
	int counter = 0;
};