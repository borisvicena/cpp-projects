/*Sucet_new
Vytvorte program, ktor� vypo��ta s��et dvoch cel�ch ��sel, zadan�ch z kl�vesnice. V�etky
premenn� nech s� ulo�en� vo vo�nom �lo�i�ti.*/
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
