#include <iostream>
#include "Hw18_5.h"
#include "../MyMetod.h"


void Hw18_5::Run()
{
	system("cls");

	MyMetod::TaskText(18.5, \
		" ������ �������� ������ � ������� � ��������� �������� � ��� ��� ������ ����������.", \
		" 1) �������� �����, ������ �������� ����� ��� ������ � ���������� ��������� ���� ������� �����.  \
		\n 2) ������� � ������������, ������� ������� �� ����� ��������, � �������� ������������ ������ \
\n ������������ �������. �������� �� ������������ ����� ������� � ��������� ��� ���� � ��������� � �������. \
		\n 3) ������������ ������ �� �������� ���������� �����, ��������� ��������.\
		\n 4) �������� ��� ����� � ���� ������� � ��������������� ����.\
		");

	int count;
	cout << " ������� ���������� �������: ";
	cin >> count;

	Player* players = new Player[count];
	for (int i = 0; i < count; ++i)
	{
		cout << " ������� ��� ������ " << i + 1 << ": ";
		cin >> players[i].Name;
		cout << " ������ ����� � ������ (" << players[i].Name << "): ";
		cin >> players[i].Score;
		cout << endl;
	}

	for (int i = 0; i < count - 1; ++i)
	{
		for (int j = 0; j < count - i - 1; ++j)
		{
			if (players[j].Score < players[j + 1].Score)
			{
				Player temp = players[j];
				players[j] = players[j + 1];
				players[j + 1] = temp;
			}
		}
	}

	cout << " ������ �� ��������:\n";
	for (int i = 0; i < count; ++i)
	{
		cout << players[i].Name << " - " << players[i].Score << "\n";
	}

	delete[] players;


	system("pause");
}

