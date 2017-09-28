// Lec_2.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double A, B, C;
	int I = 0;

	cout << "Введите длины сторон треугольника: " << endl; 
	cin >> A >> B >> C;

	if (A + B>C && B + C>A && A + C>B)
		I++;
	if (I == 1)
		cout << "Треугольник можно построить." << endl;
	else
		cout << "Треугольник построить нельзя." << endl;


	system("pause");
	return 0;
}

