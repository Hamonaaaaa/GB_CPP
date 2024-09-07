#include <iostream>
#include "Hw19_5.h"
#include "../MyMetod.h"
#include "Animal.h"


void Hw19_5::Run()
{
	system("cls");

	MyMetod::TaskText(19.5, \
		" ������ �������� ���������� ������������ � C++ � ����������� ������ �������� ���� virtual � override.", \
		" 1) �������� ����� Animal � ��������� ������� Voice(), ������� ������� � ������� ������ � �������.\
		\n 2) ���������� �� Animal ������� ��� ������ (� ������� Dog, Cat � �. �.) � � ��� ����������� ����� \
\n Voice() ����� �������, ����� ��� ������� � ������ Dog ����� Voice() ���������� Woof! � �������.\
		\n 3) � ������� main �������� ������ ���������� ���� Animal � ��������� ���� ������ ��������� ��������� �������. \
		\n 4) ����� ���������� ������ �� �������, ������� �� ������ �������� ������� ����� Voice().\
		\n 5) ������������� ��� ������. ������ ���������� ��������� �� ����� �������-����������� Animal.\
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

