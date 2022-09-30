#include <iostream>
#include <windows.h>
#include "Counter.h"
#include "CounterDemonstrator.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	CounterDemonstrator cntDemo;
	cntDemo.demonstrate();
}