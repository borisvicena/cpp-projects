/*Sucet_new
Vytvorte program, ktorý vypoèíta súèet dvoch celých èísel, zadaných z klávesnice. Všetky
premenné nech sú uložené vo vo¾nom úložišti.*/
#include<iostream>
using namespace std;

int main()
{
    int* pCislo1 = new int;
    cout << "Zadajte cislo 1: ";
    cin >> *pCislo1;

    int* pCislo2 = new int;
    cout << "Zadajte cislo 2: ";
    cin >> *pCislo2;

    int *pSucet = new int;
    *pSucet = *pCislo1 + *pCislo2;

    cout << "Vysledok je: " << *pSucet << endl;

    return 0;
}
