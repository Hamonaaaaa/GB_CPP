#pragma once
#include "../Homework.h"

using namespace std;

class Hw13_4 : public Homework
{
	double A, B;
public:
	Hw13_4()
	{
		Run();
	}

	void Run() override;
	double doubleTheSquareOfTheSum(double A, double B);
};




