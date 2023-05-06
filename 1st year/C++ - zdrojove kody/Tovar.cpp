#include<iostream>
using namespace std;

int main()
{
    int pocetKusov;
    cout << "Pocet Kusov = ";
    cin >> pocetKusov;

    const int CENA_ZA_KUS = 264;

    int cenaSpolu;
    cenaSpolu = pocetKusov * CENA_ZA_KUS;
    cout << "Celkova cena tovaru je " << cenaSpolu;

    return 0;
}
