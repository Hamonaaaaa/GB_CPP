#include "MyMetod.h"
#include <iostream>


void MyMetod::TaskText(double NumHw, const std::string& TargetHw, const std::string& Text)
{
	std::cout << "\n\t" << NumHw << " ������������ ������: " << std::endl;
	std::cout << "\n\n\t���� ������������ ������:\n " << TargetHw << std::endl;
	std::cout << "\n\n\t��� ����� �������:\n" << Text << "\n" << std::endl;
}