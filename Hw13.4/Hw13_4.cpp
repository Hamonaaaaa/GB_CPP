#include <iostream>
#include "Hw13_4.h"
#include "../MyMetod.h"


void Hw13_4::Run()
{
	system("cls");
	
	MyMetod::TaskText(13.4f,\
		"��������� ���������� ������������ �����, �������� ������� �� ������������ ������.", \
		" 1) ���������� Visual Studio �������� ���� ���������� Helpers.h � ��������� ��� � ��� �� �����, \
\n��� � ������� ����������� ���� (����, � ������� ��������� ������� main). \
		\n 2) � Helpers.h �������� �������, ������� ����� ��������� � �������� ��������� ��� ����� \
\n� ���������� ������� �� �����. \
		\n 3) ��� ������ include ���������� Helpers.h � �������� ������������ �����.\
		\n 4) �������� � ������� main �������, ���������� �����, �� Helpers.h.\
		\n 5) ��������� ����� �������� � ���� �������, ��������� � Helpers.h, � ����������, ����� ������ ���������. \
		");

	//double A, B;
	cout << "A = ";
	cin >> A;

	cout << "B = ";
	cin >> B;

	cout << "������� ����� ����� ����� " << doubleTheSquareOfTheSum(A, B) << endl;


	system("pause");

}

double Hw13_4::doubleTheSquareOfTheSum(double A, double B)
{
	return (A + B) * (A + B);
}
