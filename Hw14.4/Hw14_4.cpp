#include <iostream>
#include "Hw14_4.h"
#include "../MyMetod.h"


void Hw14_4::Run()
{
	system("cls");

	MyMetod::TaskText(14.4, \
		"��������� ������������ ���������� ������������ ������ ����������� ���������� std::string.", \
		" 1) � ������� ����������� ����� (����, � ������� ��������� ������� main) \
\n�������� � ��������������� ���������� ���� std::string ����� ���������.  \
		\n 2) �������� ���� ��������� ����������, ����� ������, ������ � ��������� ������� ���� ������.\
\n��� ������ ����������� std::cout <<. \
		");

	string Message;

	cout << "������� �����: ";
	cin >> Message;

	cout << "\n\tText = " << Message <<
		"\n\tLength = " << Message.length() <<
		"\n\tFront = " << Message.front() <<
		"\n\tBack = " << Message.back() << "\n";


	system("pause");
}

