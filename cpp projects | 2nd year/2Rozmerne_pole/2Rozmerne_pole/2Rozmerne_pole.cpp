#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int pole[3][3];
	int counter = 1;

	//Zapis do pola
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << "Zadajte " << counter++ << ". cislo na osi X : ";
			cin >> pole[x][y];
		}
		cout << "Novy riadok !" << endl;
	}
	cout << endl;
	//Vypis pola
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << pole[x][y] << " ";
		}
		cout << endl;
	}
	cout << "====================" << endl;

	//Parny prvok pola prepisat na nulu
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (pole[x][y] % 2 == 0)
				pole[x][y] = 0;

			cout << pole[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Prvky na uhlopriecke prepisat na nulu
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (x == y)
				pole[x][y] = 0;

			cout << pole[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;
			
	//Vypis pola
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << pole[x][y] << " ";
		}
		cout << endl;
	}
	cout << "====================" << endl;


	cout << "Nahodne cisla z rand intervalu / vypisat vacsie" << endl;
	//Nahodne cisla z rozsahu
	int num1 = rand() % 100 + 1;
	int num2 = rand() % 100 + 1;

	cout << "Number 1 is " << num1 << endl;
	cout << "Number 2 is " << num2 << endl;

	if (num1 >= num2)
	{
		cout << num1 << " is bigger than " << num2 << endl;
	}
	else if (num2 >= num1)
	{
		cout << num2 << " is bigger than " << num1 << endl;
	}
}