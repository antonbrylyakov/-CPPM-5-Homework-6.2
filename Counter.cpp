#include "Counter.h"

Counter::Counter(int value)
{
	_value = value;
}

void Counter::increase()
{
	++_value;
}

void Counter::decrease()
{
	--_value;
}

int Counter::getCurrent()
{
	return _value;
}

Counter::Counter()
{
	_value = 1;
}