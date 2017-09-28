// Lection_2.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double A, B, C;

	cout << "Введите три числа: " << endl;  
	cin >> A >> B >> C;

	cout << "Наименьшее число из введенных: ";

	if (A <= B && A <= C)
		cout << A << endl;
	else if (B <= A && B <= C)
		cout << B << endl;
	else 
		cout << C << endl;
	
	system("pause");
    return 0;
}
