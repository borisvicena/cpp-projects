/*Kladne_1b
Vytvorte program, ktor� zist�, ak� cel� ��slo bolo zadan�. Ak bolo zadan� kladn� ��slo,
program vyp�e �Zadali ste kladn� ��slo�, ak bola zadan� 0, tak vyp�e �Zadali ste nulu�,
ak z�porn� ��slo, tak sa vyp�e �Zadali ste z�porn� ��slo�.*/
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
