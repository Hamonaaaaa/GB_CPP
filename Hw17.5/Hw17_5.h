#pragma once
#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
private:
	double CoordX, CoordY, CoordZ;

public:
	Vector(double CoordX, double CoordY, double CoordZ);
	void DisplayCoordinates() const;
	double Length() const;
};


#endif // !VECTOR_H

#include "../Homework.h"

using namespace std;

class Hw17_5 : public Homework
{
public:
	Hw17_5() 
	{
		Run();
	}

	void Run() override;
};