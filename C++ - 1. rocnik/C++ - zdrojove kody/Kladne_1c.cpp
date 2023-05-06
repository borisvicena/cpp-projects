/*Kladne_1b
Vytvorte program, ktorý zistí, aké celé èíslo bolo zadané. Ak bolo zadané kladné èíslo,
program vypíše „Zadali ste kladné èíslo“, ak bola zadaná 0, tak vypíše „Zadali ste nulu“,
ak záporné èíslo, tak sa vypíše „Zadali ste záporné èíslo“.*/
#include<iostream>
using namespace std;

int main()
{
    cout << "Zadajte cislo: ";
    int cislo;
    cin >> cislo;

    if (cislo > 0)
    {
        cout << "Zadali ste kladne cislo." << endl;
    }

    else
    {
        if(cislo == 0)
        {
            cout << "Zadali ste 0." << endl;
        }
        else
        {
            cout << "Zadali ste zaporne cislo." << endl;
        }
    }
    return 0;
    }
