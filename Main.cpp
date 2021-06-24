#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Counter/Counter.h"
#include "Timer.h"

double LongDivision(int starting_dividen, int divisor, Counter* counter_ptr);
int ConcatinateInt(int number1, int number2);
void BBPFormula(int number_of_iterations, Counter* counter_ptr);
double AddTen(double a, double goal);

int main()
{
	long iterations = 0;
	Counter* counter_ptr = new Counter;
	std::cout << "How many iterations would you like to run?" << '\n';
	std::cin >> iterations;		
	BBPFormula(iterations, counter_ptr);

	//std::cout <<'\n'<< counter_ptr->GetCounter();

	/*
	const int dividen = 0;
	const int divisor = 0;
	LongDivision(dividen, divisor, Counter_ptr);
	*/
	delete counter_ptr;
	std::cin.get();
	return 0;
}
//https://en.wikipedia.org/wiki/Bailey%E2%80%93Borwein%E2%80%93Plouffe_formula
void BBPFormula(int number_of_iterations, Counter* counter_ptr)
{
	Timer time;
	//BBP Equation... (1 / 16 ^ counter_ptr->GetCounter()) * ((4 / (8 * counter_ptr->GetCounter() + 1)) - (2 / (8 * counter_ptr->GetCounter() + 4)) - (1 / (8 * counter_ptr->GetCounter() + 5)) - (1 / (8 * counter_ptr->GetCounter() + 6)))
	
	double final_num = 0;
	for (long i = 0; i < number_of_iterations; i++)
	{
		double temp1 = (1 / 16 ^ number_of_iterations);
		double temp2 = (4 / (8.0 * number_of_iterations + 1));
		double temp3 = (2 / (8.0 * number_of_iterations + 4));
		double temp4 = (1 / (8.0 * number_of_iterations + 5));
		double temp5 = (1 / (8.0 * number_of_iterations + 6));
		double temp6 = temp2 - temp3 - temp4 - temp5;
		final_num += temp6 * temp1;
		counter_ptr->Count();
	}
	std::cout<<"Count is at " <<counter_ptr->GetCounter()<<'\n' << final_num << '\n'<<'\n';
	
	
	return;
}
void IntToArray(int number,std::vector<int>& output_vector)
{
	
	
		return;
}
double LongDivision(int starting_dividen, int divisor, Counter* counter_ptr)
{
	counter_ptr->Count();
	int temp_dividen = 0;
	int temp_quotient = 0;
	int result = 0;
	int remainder = 0;


	remainder = starting_dividen % divisor;

	result = starting_dividen / divisor;


	if (remainder >= 0)
	{
		LongDivision(remainder, divisor, counter_ptr);
	}
	return result;
}
int ConcatinateInt(int number1, int number2)
{
	std::ostringstream result_string;
	result_string << number1 << number2;
	return stoi(result_string.str());
}
double AddTen(double a,double goal)
{
	a += 10;

	if (a <= goal)
	{
		AddTen(a, goal);
	}
	
	return a;
}