#pragma once
#include <string>

class MyMetod
{
public:
	/// <summary>
	/// Метод для вывода в консоль целей задания
	/// </summary>
	/// <param name="NumHw">(Номер задания)</param>
	/// <param name="TargetHw">(Цель задания)</param>
	/// <param name="Text">(Что нужно сделать в задании)</param>
	static void TaskText(double NumHw = 0.0f, const std::string& TargetHw = "", const std::string& Text = "");
};