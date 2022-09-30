#pragma once
#include "Counter.h"

class CounterDemonstrator
{
public:
	void demonstrate();
private:
	const static char CMD_INCREASE = '+';
	const static const char CMD_DECREASE = '-';
	const static const char CMD_GET_CURRENT = '=';
	const static char CMD_EXIT = 'x';
	const std::string CMD_YES = "да";
	const std::string CMD_NO = "нет";

	Counter initCounter();
};