// Lection_2.7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float T, M, HR=9, KR=18, HP, KP, VR; //HR - начало работы, KR - конец работы, HP - начало перерыва, KP - конец перерыва, VR - введенное время
	HP = 13 + 30 / 60; //Перевод в десятичные величины
	KP = 14 + 30 / 60;

	cout << "Введите часы и минуты " << endl;  
	cin >> T >> M;
	
	if (T<0 || T>=24 || M<0 || M>=60)
	   cout << "Введено некорректное время! ";
	else
	{
		VR = T + M / 60;
		if (VR >= HR && VR < HP || VR >= KP && VR < KR)
			cout << "Открыто" << endl;
		else
			cout << "Закрыто" << endl;
	}
	
	system("pause");
    return 0;
}
