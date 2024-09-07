#include <iostream>
#include "Hw17_5.h"
#include "../MyMetod.h"


void Hw17_5::Run()
{
	system("cls");

	MyMetod::TaskText(17.5, \
		" ��������� �������� � ��������� ������ � ��������������� ���� ������.", \
		" 1) �������� ����� �������. \
\n ��� ���������� ������ ���� � ��������� ������� ���������. \
\n ���������� �������� ���� ���������� ����� ����� ��������� �����. \
		\n 2) ��������� ����� Vector public �������, ������� ����� ���������� ����� (������) �������. \
		\n 3) ������������� ������.\
		");

	cout << " ������� ��������� ������� (X, Y, Z)\n";

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

	cout << " ������ ������� = " << Vec.Length() << endl;


	system("pause");
}

Vector::Vector(double CoordX, double CoordY, double CoordZ) : CoordX(CoordX), CoordY(CoordY), CoordZ(CoordZ) {}

void Vector::DisplayCoordinates() const
{
	cout << " ���������� ������� = (" << CoordX << ", " << CoordY << ", " << CoordZ << ")" << endl;
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
