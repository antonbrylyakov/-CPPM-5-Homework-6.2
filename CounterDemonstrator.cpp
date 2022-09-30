#include <iostream>
#include "CounterDemonstrator.h"

void CounterDemonstrator::demonstrate()
{
	char cmd;
	Counter cnt = initCounter();
	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'(англ.)): ";
		std::cin >> cmd;

		switch (cmd)
		{
		case CMD_INCREASE: cnt.increase();
			break;
		case CMD_DECREASE: cnt.decrease();
			break;
		case CMD_GET_CURRENT: std::cout << cnt.getCurrent() << std::endl;
			break;
		}
	} while (cmd != CMD_EXIT);
	std::cout << "До свидания!";
}

Counter CounterDemonstrator::initCounter()
{
	std::string answer;
	bool answerValid = false;
	bool needInitialValue = false;

	do
	{
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
		std::cin >> answer;
		answerValid = (needInitialValue = answer == CMD_YES) || answer == CMD_NO;
	} while (!answerValid);

	if (needInitialValue)
	{
		int initialValue = 0;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> initialValue;
		return Counter(initialValue);
	}

	return Counter();
}