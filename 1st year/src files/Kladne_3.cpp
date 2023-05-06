#include<iostream>
using namespace std;

int main(){

    int pocetKladnych = 0;

    int cislo;
    cout << "Zadajte cislo: ";
    cin >> cislo;

    if (cislo>0)
    {
        pocetKladnych++;
    }

    cout << "Zadajte cislo: ";
    cin >> cislo;

    if (cislo>0)
    {
        pocetKladnych++;
    }

    cout << "Zadajte cislo: ";
    cin >> cislo;

    if (cislo>0)
    {
        pocetKladnych++;
    }

    cout << "Zadajte cislo: ";
    cin >> cislo;

    if (cislo>0)
    {
        pocetKladnych++;
    }

    cout << "Zadajte cislo: ";
    cin >> cislo;

    if (cislo>0)
    {
        pocetKladnych++;
    }


    cout << "Pocet kladnych cisel je: " << pocetKladnych << endl;



    return 0;
}
