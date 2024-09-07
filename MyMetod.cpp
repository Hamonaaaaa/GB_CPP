#include "MyMetod.h"
#include <iostream>


void MyMetod::TaskText(double NumHw, const std::string& TargetHw, const std::string& Text)
{
	std::cout << "\n\t" << NumHw << " Практическая работа: " << std::endl;
	std::cout << "\n\n\tЦель практической работы:\n " << TargetHw << std::endl;
	std::cout << "\n\n\tЧто нужно сделать:\n" << Text << "\n" << std::endl;
}