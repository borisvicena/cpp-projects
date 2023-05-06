#include<iostream>
#include<cstdlib>
#include<ctime>
#include<time.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	//Zapis pola pri definici
	int pole[3][3] = {
		{15, 47, 32},
		{73, 24, 90},
		{13, 66, 84}
	};

	//Vypis pola
	for (int i = 0; i < 3; i++)	
	{
		for (int j = 0; j < 3; j++)
		{
			cout << pole[i][j] << " ";
		}
		cout << endl;
	}
	cout << "======================" << endl;

	//Vynulovanie parnych cisel po uhlopriecke
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
			{
				if (pole[i][j] % 2 == 0)
				{
					pole[i][j] = 0;
				}
			}
			cout << pole[i][j] << " ";
		}
		cout << endl;
	}
	cout << "======================" << endl;


	//Dve nahodne cisla z rozsahu od 1 do 100
	//Naplnenie cisel random hodnotami z rozshau
	int num1 = rand() % 100 + 1;
	int num2 = rand() % 100 + 1;

	cout << "Random number 1 is: " << num1 << endl;
	cout << "Random number 2 is: " << num2 << endl;
	cout << endl;

	//Vypisanie vacsieho cisla z cisel num1 a num2
	cout << "Maximum number" << endl;
	if (num1 > num2)
	{
		cout << num1 << " is bigger than " << num2 << endl;
	}
	else if (num1 == num2)
	{
		cout << num1 << " is equal to " << num2 << endl;
	}
	else
	{
		cout << num2 << " is bigger than " << num1 << endl;
	}

	return 0;
}