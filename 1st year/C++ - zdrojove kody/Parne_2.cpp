/*Parne_2
Vytvorte program, ktor� zist�, �i cel� ��slo zadan� z kl�vesnice je p�rne. Ak bude zadan� 0
alebo p�rne ��slo, tak program vyp�e �Zadali ste parne cislo�. Ak bude zadan� nep�rne
��slo, tak sa vyp�e �Zadali ste neparne cislo�.*/
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
