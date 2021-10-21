// Laboratorna 4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я
// Вкладені цикли
// Лабораторна робота № 4.6
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double P, S;
	int n, k;

	S = 0;
	n = 1;
	while (n <= 10)

	{
		P = 1;
		k = 1;
		while (k <= n)
		{
			P *= sin(k + n);
			k++;
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
		n++;
	}
	cout << S << endl;
	S = 0;
	n = 1;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= sin(k + n);
			k++;
		} while (k <= n);
		S += sqrt(1 + cos(n) * cos(n) + P);
		n++;
	} while (n <= 10);
	cout << S << endl;

	S = 0;
	for (n = 1; n <= 10; n++)
	{
		P = 1;
		for (k = 1; k <= n; k++)
		{
			P *= sin(k + n);
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
	}
	cout << S << endl;

	S = 0;
	for (n = 10; n >= 1; n--)
	{
		P = 1;
		for (k = n; k >= 1; k--)
		{
			P *= sin(k + n);
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
	}
	cout << S << endl;
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
