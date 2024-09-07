#include <iostream>
#include "Hw16_5.h"
#include "../MyMetod.h"
#include <time.h>


void Hw16_5::Run()
{
	system("cls");

	MyMetod::TaskText(16.5, \
		" Закрепить навык работы с массивами данных и навык преобразования типов данных.", \
		" 1) В главном исполняемом файле (файл, в котором находится функция main) \
\n создайте двумерный массив размерности N х N и заполните его так, \
\n чтобы элемент с индексами i и j был равен i + j.  \
		\n 2) Выведите этот массив в консоль.  \
		\n 3) Выведите сумму элементов в строке массива, индекс которой равен остатку деления \
\n текущего числа календаря на N (в двумерном массиве a[i][j], i — индекс строки). \
		");

	cout << " Размер массива (N * N) : N = ";
	int Size;
	cin >> Size;
	cout << "\n Вывод массива в консоль\n";

	int** Array2D = Hw16_5::Create2DArray(Size);

	Hw16_5::Print2DArray(Array2D, Size);

	time_t currentTime = time(nullptr);
	struct tm localTime;
	localtime_s(&localTime, &currentTime);
	int currentDay = localTime.tm_mday;
	int rowIndex = currentDay % Size;

	int rowSum = 0;
	for (int j = 0; j < Size; ++j) 
	{
		rowSum += Array2D[rowIndex][j];
	}

	cout << "\n Сумма элементов в строке " << rowIndex << ": " << rowSum << '\n';

	Hw16_5::Delete2DArray(Array2D, Size);
	cout << "\n\n Массив удалён \n\n";


	system("pause");
}

int** Hw16_5::Create2DArray(int Size)
{
	int** Array = new int* [Size];
	for (int i = 0; i < Size; i++)
	{
		Array[i] = new int[Size];
	}
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			Array[i][j] = i + j;
		}
	}
	return Array;
}

void Hw16_5::Print2DArray(int** Array, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			cout << Array[i][j] << "\t";
		}
		cout << "\n";
	}
}

//void Hw16_5::Day(int** Array, int Size)
//{
//	time_t currentTime = time(nullptr);
//	struct tm* localTime = localtime(&currentTime);
//	int currentDay = localTime->tm_mday;
//	int rowIndex = currentDay % Size;
//
//	int rowSum = 0;
//	for (int j = 0; j < Size; ++j) 
//	{
//		rowSum += Array[rowIndex][j];
//	}
//
//	std::cout << "Сумма элементов в строке " << rowIndex << ": " << rowSum << '\n';
//}

void Hw16_5::Delete2DArray(int** Array, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		delete[] Array[i];
	}
	delete[] Array;
}
