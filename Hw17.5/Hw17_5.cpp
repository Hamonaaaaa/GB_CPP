#include <iostream>
#include "Hw17_5.h"
#include "../MyMetod.h"


void Hw17_5::Run()
{
	system("cls");

	MyMetod::TaskText(17.5, \
		" Ќаучитьс€ работать с массивами данных и преобразовывать типы данных.", \
		" 1) —оздайте класс вектора. \
\n ≈го переменные должны быть в приватной области видимости. \
\n ѕоказывать значени€ этих переменных нужно через публичный метод. \
		\n 2) ƒополните класс Vector public методом, который будет возвращать длину (модуль) вектора. \
		\n 3) ѕротестируйте проект.\
		");

	cout << " ¬ведите кординаты вектора (X, Y, Z)\n";

	double CoordX;
	cout << " X = ";
	cin >> CoordX;

	double CoordY;
	cout << " Y = ";
	cin >> CoordY;

	double CoordZ;
	cout << " Z = ";
	cin >> CoordZ;

	Vector Vec(CoordX, CoordY, CoordZ);

	Vec.DisplayCoordinates();

	cout << " ƒлинна вектора = " << Vec.Length() << endl;


	system("pause");
}

Vector::Vector(double CoordX, double CoordY, double CoordZ) : CoordX(CoordX), CoordY(CoordY), CoordZ(CoordZ) {}

void Vector::DisplayCoordinates() const
{
	cout << "  оординаты вектора = (" << CoordX << ", " << CoordY << ", " << CoordZ << ")" << endl;
}

static double Square(double Value)
{
	return Value * Value;
}

static double SquareRoot(double Value)
{
	double Root = Value / 3;
	if (Value <= 0) return 0;
	for (int i = 0; i < 32; i++)
	{
		Root = (Root + Value / Root) / 2;
	}
	return Root;
}

double Vector::Length() const
{
	return SquareRoot(Square(CoordX) + Square(CoordY) + Square(CoordZ));
}
