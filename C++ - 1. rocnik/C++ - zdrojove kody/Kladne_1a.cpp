/*Kladne_1a
Vytvorte program, ktorý zistí, èi celé èíslo zadané z klávesnice je kladné. Ak bude zadané
kladné èíslo, tak program vypíše „Zadali ste kladne cislo“. Ak bude zadaná 0 alebo
záporné èíslo, tak program niè nevypíše.*/
#include<iostream>
using namespace std;

int main()
{
    int cislo;

    cout << "Zadajte cislo: ";
    cin >> cislo;

    if(cislo>0)
    {
        cout << "Zadali ste kladne cislo.";
    }
    return 0;
}
