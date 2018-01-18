
#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
#include "Top.hpp"


using namespace std;

	
	Top::Top()
	{
		*value = 246;
		*color = addcolor(rand() % 15 + 1);
	}

	int Top::addcolor(int clr)
	{
		return clr;
	}
	
	void Top::colorassign()
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *color);
	}
	
	char Top::show() {
	
		return *value;

	}

	Top::~Top()
	{
		delete color;
		delete value;
	}
