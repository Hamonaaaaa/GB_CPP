#include <iostream>
#include "Hw15_4.h"
#include "../MyMetod.h"


void Hw15_4::Run()
{
	system("cls");

	MyMetod::TaskText(15.4, \
		"��������� �������� � ������� � ������� � �� ������� ���������.", \
		" 1) � ������� ����������� ����� (����, � ������� ��������� ������� main), \
\n��������� ���� � �������, �������� � ������� ��� ������ ����� �� 0 �� N \
\n(N ������� ���������� � ������ ���������).   \
		\n 2) �������� �������, ������� � ����������� �� ����� ���������� \
\n�������� � ������� ��� ������, ��� �������� ����� �� 0 �� N \
\n(N ���� �������� ���������� �������). \
		\n 3) ������������� ���������� ������ � �������. \
		");


	cout << " �������\n\t(1) ׸����\n\t(0) �� ������\n ��� ������ �� �����: ";
	bool IsEven = true;
	cin >> IsEven;

	
	cout << " ������� ������������ �����: ";
	int UpperLimit;
	cin >> UpperLimit;


	PrintSequence(IsEven, UpperLimit);


	system("pause");
}

void Hw15_4::PrintSequence(bool IsEven, int UpperLimit)
{
	int Number = IsEven ? 0 || false : 1 || true;
	for (int i = Number; i <= UpperLimit; i += 2)
	{
		cout << i << " ";
	}
	cout << "\n";
}
