// Lection_2.6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double A, D;
		
	cout << "Введите число а: " << endl; 
	cin >> A;

	D = 1+4*A;

	if (D > 0)
		cout << "Уравнение имеет два решения." << endl;
	else if (D = 0)
		cout << "Уравнение имеет одно решение." << endl;
	else
		cout << "Решений нет." << endl;
	
	system("pause");
    return 0;
}
