#pragma once

class Counter
{
public:
	Counter();

	Counter(int value);

	void increase();

	void decrease();

	int getCurrent();

private:
	int _value;
};