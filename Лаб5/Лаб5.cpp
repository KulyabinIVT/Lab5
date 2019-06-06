// Лаб5.cpp: определяет точку входа для консольного приложения.
//Вариант 6: Написать программу, которая считывает текст из файла и выводит на экран только предложения, не содержащие запятых

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Windows.h"
using namespace std;

int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in_file("in.txt");
	char ch;
	string str;
	if (!in_file) {
		cout << "Файл не найден!"; 
		return 1;
	}
	else
	{
		while (in_file.good())
		{

			in_file.get(ch);

			str.push_back(ch);
			if (ch == '.' || ch == '\n'|| ch == '?' || ch == '!')
			{
				if (str.find(',') == str.npos && str!=" " && str != "\n" && str != ".")
					cout << str << endl;

				str.clear();
			}
		}
		system("pause");
	}
	return 0;
}
