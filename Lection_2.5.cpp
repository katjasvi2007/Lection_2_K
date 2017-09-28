// Lection_2.5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double A1, A2, B1, B2, D, M, N;

	
	cout << "Введите сумму и произведение: " << endl; 
	cin >> M >> N;

	D = pow(M,2) - 4*N;

	if (D > 0)
	{
		B1=0.5*(M-sqrt(D));
		B2=0.5*(M+sqrt(D));
		if (B1!=0 && B2!=0)
		{
			A1=N/B1;
		    A2=N/B2;
		}
		else
			A1=A2=M;
		if (A1<B1)
			cout << A1 << "," << B1 << "," << B2 << "," << A2 << endl;
		else
			cout << B1 << "," << A1 << "," << A2 << "," << B2 << endl;
	}
	else if (D=0)
	{
		B1=0.5*M;
	    A1=N/B1;
		if (A1>B1)
			cout << B1 << "," << A1 << endl;
		else
			cout << A1 << "," << B1 << endl;
	}
	else
		cout << "Дискриминант отрицательный. Решений нет." << endl;
	
	system("pause");
    return 0;
}
