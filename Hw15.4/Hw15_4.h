#pragma once
#include "../Homework.h"

using namespace std;

class Hw15_4 : public Homework
{
public:
	Hw15_4()
	{
		Run();
	}

	void Run() override;
	void PrintSequence(bool IsEven, int UpperLimit);
};