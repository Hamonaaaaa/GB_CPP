#include <iostream>
#include "Hw18_5.h"
#include "../MyMetod.h"


void Hw18_5::Run()
{
	system("cls");

	MyMetod::TaskText(18.5, \
		" ѕон€ть принципы работы с пам€тью и научитьс€ работать с ней при помощи указателей.", \
		" 1) —оздайте класс, пол€ми которого будут им€ игрока и количество набранных этим игроком очков.  \
		\n 2) ”знайте у пользовател€, сколько игроков он хочет добавить, и создайте динамический массив \
\n необходимого размера. ѕолучите от пользовател€ имена игроков и набранные ими очки и сохраните в массиве. \
		\n 3) ќтсортируйте массив по убыванию количества очков, набранных игроками.\
		\n 4) ¬ыведите все имена и очки игроков в отсортированном виде.\
		");

	int count;
	cout << " ¬ведите количество игроков: ";
	cin >> count;

	Player* players = new Player[count];
	for (int i = 0; i < count; ++i)
	{
		cout << " ¬ведите им€ игрока " << i + 1 << ": ";
		cin >> players[i].Name;
		cout << " —колко очков у игрока (" << players[i].Name << "): ";
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

	cout << " »гроки по убыванию:\n";
	for (int i = 0; i < count; ++i)
	{
		cout << players[i].Name << " - " << players[i].Score << "\n";
	}

	delete[] players;


	system("pause");
}

