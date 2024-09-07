#include <iostream>
#include "Hw13.4/Hw13_4.h"
#include "Hw14.4/Hw14_4.h"
#include "Hw15.4/Hw15_4.h"
#include "Hw16.5/Hw16_5.h"
#include "Hw17.5/Hw17_5.h"
#include "Hw18.5/Hw18_5.h"
#include "Hw19.5/Hw19_5.h"


using namespace std;

static void DisplayMenu()
{
	cout << "\n Список практических заданий\n"
		<< "\t1) 13.4 Препроцессор и его директивы\n"
		<< "\t2) 14.4 Создание проекта, создание базовых классов на C++, настройка проекта\n"
		<< "\t3) 15.4 Правила создания классов и объектов, заголовки и макросы\n"
		<< "\t4) 16.5 Массивы. Преобразование типов данных\n"
		<< "\t5) 17.5 Классы и объекты в С++. Инкапсуляция\n"
		<< "\t6) 18.5 Указатели и ссылки\n"
		<< "\t7) 19.5 Классы и объекты в С++. Наследование\n";
}
void HomeworkRun(int NumHomework)
{
	Homework* Hw = nullptr;
	if (Hw == nullptr)
	{
		switch (NumHomework)
		{
		case 1:
			Hw = new Hw13_4;
			break;
		case 2:
			Hw = new Hw14_4;
			break;
		case 3:
			Hw = new Hw15_4;
			break;
		case 4:
			Hw = new Hw16_5;
			break;
		case 5:
			Hw = new Hw17_5;
			break;
		case 6:
			Hw = new Hw18_5;
			break;
		case 7:
			Hw = new Hw19_5;
			break;
		case 0:
			break;
		default:
			cout << " Введено неверное значение, попробуйте еще раз.";
			system("Pause");
			break;
		}
		delete Hw;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	int NumHomework = NULL;

	do
	{	
		system("cls");
		DisplayMenu();
		cout << "\n Какое задание желаете выбрать? (0 для выхода): ";
		cin >> NumHomework;
		HomeworkRun(NumHomework);

	}
	while (NumHomework != 0);

	return 0;
}