// Lection_2.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int CH;
	char AL; 
			
	cout << "Введите любое число в интервале от 1 до 26: ";
	cin >> CH;
	
	if (CH >= 1 && CH <= 26) 
	{
		AL = CH+64;
		cout.put(AL) << endl;
	}
	else
		cout << "Введите число заново" << endl;
	
	system("pause");
    return 0;
}



