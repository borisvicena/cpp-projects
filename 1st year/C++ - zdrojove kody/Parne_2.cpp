/*Parne_2
Vytvorte program, ktorı zistí, èi celé èíslo zadané z klávesnice je párne. Ak bude zadaná 0
alebo párne èíslo, tak program vypíše „Zadali ste parne cislo“. Ak bude zadané nepárne
èíslo, tak sa vypíše „Zadali ste neparne cislo“.*/
#include<iostream>
using namespace std;

int main()
{
    cout << "Zadajte cislo: ";
    int cislo;
    cin >> cislo;

    if (cislo % 2 == 0)
    {
        cout << "Zadali ste parne cislo. " << endl;
    }

    else
    {
        cout << "Zadali ste neparne cislo. " << endl;
    }
    return 0;
}
