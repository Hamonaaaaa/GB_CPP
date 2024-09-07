#include <iostream>
#include "Hw15_4.h"
#include "../MyMetod.h"


void Hw15_4::Run()
{
	system("cls");

	MyMetod::TaskText(15.4, \
		"Научиться работать с циклами и строить с их помощью алгоритмы.", \
		" 1) В главном исполняемом файле (файл, в котором находится функция main), \
\nиспользуя цикл и условия, выведите в консоль все чётные числа от 0 до N \
\n(N задайте константой в начале программы).   \
		\n 2) Напишите функцию, которая в зависимости от своих параметров \
\nпечатает в консоль или чётные, или нечётные числа от 0 до N \
\n(N тоже сделайте параметром функции). \
		\n 3) Минимизируйте количество циклов и условий. \
		");


	cout << " Введите\n\t(1) Чётные\n\t(0) Не чётные\n для вывода на экран: ";
	bool IsEven = true;
	cin >> IsEven;

	
	cout << " Введите максимальное число: ";
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
