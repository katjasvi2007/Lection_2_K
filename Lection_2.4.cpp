// Lection_2.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char AL;
	int OTM;
	
	cout << "Введите оценку от 0 до 99: "; 
	cin >> OTM;

	if (OTM >= 0 && OTM <= 99)
	{
		AL = 64 + 10 - int(OTM / 10);
		cout << "Разряд, соответствующий оценке: ";
		cout << AL << endl;
	}
	else
		cout << "Ошибка при вводе!" << endl;
	
	system("pause");
    return 0;
}

