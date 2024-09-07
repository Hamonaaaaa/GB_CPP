#include <iostream>
#include "Hw13_4.h"
#include "../MyMetod.h"


void Hw13_4::Run()
{
	system("cls");
	
	MyMetod::TaskText(13.4f,\
		"Научиться подключать заголовочные файлы, вызывать функцию из подключенных файлов.", \
		" 1) Средствами Visual Studio создайте файл заголовков Helpers.h и сохраните его в той же папке, \
\nчто и главный исполняемый файл (файл, в котором находится функция main). \
		\n 2) В Helpers.h создайте функцию, которая будет принимать в качестве аргумента два числа \
\nи возвращать квадрат их суммы. \
		\n 3) При помощи include подключите Helpers.h к главному исполняемому файлу.\
		\n 4) Вызовите в функции main функцию, написанную ранее, из Helpers.h.\
		\n 5) Поставьте точку останова в теле функции, описанной в Helpers.h, и посмотрите, какие пришли аргументы. \
		");

	//double A, B;
	cout << "A = ";
	cin >> A;

	cout << "B = ";
	cin >> B;

	cout << "Квадрат суммы чисел равен " << doubleTheSquareOfTheSum(A, B) << endl;


	system("pause");

}

double Hw13_4::doubleTheSquareOfTheSum(double A, double B)
{
	return (A + B) * (A + B);
}
