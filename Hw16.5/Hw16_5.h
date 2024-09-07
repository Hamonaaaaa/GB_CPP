#pragma once
#include "../Homework.h"

using namespace std;
 
class Hw16_5 : public Homework
{
public:
	Hw16_5()
	{
		Run();
	}

	void Run() override;

	int** Create2DArray(int Size);
	void Print2DArray(int** Array, int Size);
	void Delete2DArray(int** Array, int Size);
};
