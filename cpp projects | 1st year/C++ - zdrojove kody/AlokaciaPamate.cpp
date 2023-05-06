//Ukazka alokovania a uvolnenia volneho uloziska
#include<iostream>
using namespace std;

int main()
{
    int* pCislo1 = new int;
    *pCislo1 = 25;
    cout << "pCislo1 ukazuje na hodnotu: " << *pCislo1 << endl;

    cout << "Adresa pointera pCislo1: " << &pCislo1 << endl;

    cout << "Pointer pCislo1 ukazuje na adresu: " << pCislo1 << endl;

    delete pCislo1;
    pCislo1 = 0;

    ///*pCislo1 = 100;

    double* pPriemer = new double;
    cout << "Zadajde desatinne cislo: ";
    cin >> *pPriemer;

    cout << "Zadali ste cislo: " << *pPriemer << endl;

    delete pPriemer;
    pPriemer = 0;


    return 0;
}
