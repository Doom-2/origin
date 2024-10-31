#include <iostream>
#include "Counter.h"

using namespace std;

Counter::Counter() : Counter(1) {};
Counter::Counter(const int& count)
{ 
	Counter::_count = count;
}

void Counter::increment()
{
	Counter::_count++;
}

void Counter::decrement()
{
	Counter::_count--;
}

void Counter::show()
{
	cout << Counter::_count << endl;
}

void Counter::set_count(int value) {
	Counter::_count = value;
}