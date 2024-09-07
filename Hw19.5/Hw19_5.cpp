#include <iostream>
#include "Hw19_5.h"
#include "../MyMetod.h"
#include "Animal.h"


void Hw19_5::Run()
{
	system("cls");

	MyMetod::TaskText(19.5, \
		" Понять принципы реализации наследования в C++ и особенности работы ключевых слов virtual и override.", \
		" 1) Создайте класс Animal с публичным методом Voice(), который выводит в консоль строку с текстом.\
		\n 2) Наследуйте от Animal минимум три класса (к примеру Dog, Cat и т. д.) и в них перегрузите метод \
\n Voice() таким образом, чтобы для примера в классе Dog метод Voice() выводилось Woof! в консоль.\
		\n 3) В функции main создайте массив указателей типа Animal и заполните этот массив объектами созданных классов. \
		\n 4) Затем пройдитесь циклом по массиву, вызывая на каждом элементе массива метод Voice().\
		\n 5) Протестируйте его работу. Должны выводиться сообщения из ваших классов-наследников Animal.\
		");

	static const int numAnimals = 3;
	Animal* animals[numAnimals];
	
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < numAnimals; ++i) 
	{
        animals[i]->Voice();
		std::cout << "\n" << std::endl;
    }


    system("pause");
}

