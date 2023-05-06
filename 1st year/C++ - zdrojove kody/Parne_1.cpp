/*Parne_1
Vytvorte program, ktorý zistí, èi celé èíslo zadané z klávesnice je párne. Ak bude zadaná 0
alebo párne èíslo, tak program vypíše „Zadal si parne cislo“. Ak bude zadané nepárne
èíslo, tak sa niè nevypíše.*/
#include<iostream>
using namespace std;

int main()
{
    cout << "Zadajte cislo: ";
    int cislo;
    cin >> cislo;

    if (cislo % 2 == 0)
    {

        cout << "Zadali ste parne cislo." << endl;

    }

    return 0;
}
