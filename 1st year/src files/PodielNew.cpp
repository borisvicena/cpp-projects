#include<iostream>
using namespace std;

int main()
{
    int* pCislo1 = new int;
    cout << "Zadajte cislo 1: ";
    cin >> *pCislo1;

    int* pCislo2 = new int;
    cout << "Zadaje cislo 2: ";
    cin >> *pCislo2;

    double* pPodiel = new double;
    *pPodiel =(double) *pCislo1 / *pCislo2;

    cout << "Vysledok je: " << *pPodiel << endl;


}
