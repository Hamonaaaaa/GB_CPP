#pragma once
#include <string>

class MyMetod
{
public:
	/// <summary>
	/// ����� ��� ������ � ������� ����� �������
	/// </summary>
	/// <param name="NumHw">(����� �������)</param>
	/// <param name="TargetHw">(���� �������)</param>
	/// <param name="Text">(��� ����� ������� � �������)</param>
	static void TaskText(double NumHw = 0.0f, const std::string& TargetHw = "", const std::string& Text = "");
};