#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int pole[10]; // = { 90, 1, 74, 2, -18, -6, 42, -3 };
	int velkost = sizeof(pole) / sizeof(pole[0]);
	int temp = 0;
	int porovnanie = 0;
	int vymena = 0;

	//FILLING ARRAY WITH RANDOM NUMBERS FROM INTERVAL
	cout << "Array filled with random numbers " << endl;
	cout << "| ";
	for (int i = 0; i < velkost; i++)
	{
		pole[i] = rand() % 1000 + (-500);
		cout << pole[i] << " | ";
	}
	cout << endl << endl;

	//APPLYING BUBBLE SORT ALGORYTHM IN ARRAY
	cout << "Array after Bubble Sort Algorythm " << endl;
	cout << "| ";
	for (int i = 0; i < velkost - 1; i++)
	{
		for (int j = 0; j < velkost - i - 1; j++)
		{
			if (pole[j] > pole[j + 1])
			{
				int temp = pole[j];
				pole[j] = pole[j + 1];
				pole[j + 1] = temp;

				vymena++;
			}
			porovnanie++;
		}
	}
	
	for (int i = 0; i < sizeof(pole) / sizeof(pole[0]); i++)
	{
		cout << pole[i] << " | ";
	}
	cout << endl << endl;
	cout << "Pocet porovnani je: " << porovnanie << endl;
	cout << "Pocet vymen je: " << vymena << endl << endl;

	return 0;
}