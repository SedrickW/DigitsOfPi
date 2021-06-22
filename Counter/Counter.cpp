#include "Counter.h"


void Counter::Count()
{
	counter++;
	return;
}
void Counter::Reset()
{
	counter = 0;
	return;
}
const int Counter::GetCounter()
{
	return counter;
}
void Counter::AddCounts(int counts_to_add)
{
	counter += counts_to_add;
}