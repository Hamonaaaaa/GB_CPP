#include <iostream>
#include "Hw14_4.h"
#include "../MyMetod.h"


void Hw14_4::Run()
{
	system("cls");

	MyMetod::TaskText(14.4, \
		"Научиться пользоваться встроенным функционалом класса стандартной библиотеки std::string.", \
		" 1) В главном исполняемом файле (файл, в котором находится функция main) \
\nсоздайте и инициализируйте переменную типа std::string любым значением.  \
		\n 2) Выведите саму строковую переменную, длину строки, первый и последний символы этой строки.\
\nДля вывода используйте std::cout <<. \
		");

	string Message;

	cout << "Введите текст: ";
	cin >> Message;

	cout << "\n\tText = " << Message <<
		"\n\tLength = " << Message.length() <<
		"\n\tFront = " << Message.front() <<
		"\n\tBack = " << Message.back() << "\n";


	system("pause");
}

