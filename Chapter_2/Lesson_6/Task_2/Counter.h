#pragma once

class Counter
{
private:
	int _count;

public:
	Counter();
	Counter(const int& count);

	void increment();
	void decrement();
	void show();
	void set_count(int value);
};
