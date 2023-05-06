//Vytvorte program na výpoèet podielu dvoch èísel
#include<iostream>
using namespace std;

int main()
{
    //delenie dvoch celych cisel
    int cislo1;
    cout << "Zadajte cislo1: ";
    cin >> cislo1;

    int cislo2;
    cout << "Zadajte cislo2: ";
    cin >> cislo2;

    int podiel1 = cislo1/cislo2;
    cout <<  "Celociselny podiel je " << podiel1 << endl;

    double podiel2 = (double) cislo1/cislo2;   //pretypovanie
    cout << "Presny vysledok delenia je " << podiel2 << endl;

    double cislo3;
    cout << "Zadajte desatinne cislo3: ";
    cin >> cislo3;

    double cislo4;
    cout << "Zadajte desatinne cislo4: ";
    cin >> cislo4;

    podiel1 = cislo3/cislo4;
    cout << "Podiel desatinnych cisel je " << podiel1 << endl;

    podiel2 = cislo3/cislo4;
    cout << "Presny podiel desatinnych cisel je "  << podiel2 << endl;

    return 0;
}
