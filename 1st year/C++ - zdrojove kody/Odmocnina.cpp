//Vytvorte program na výpoèet druhej odmocniny z èísla zadaného z klávesnice.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    cout << "Zadajte cislo: ";
    double cislo;
    cin >> cislo;

    double odmocnina = sqrt(cislo);
    cout << "Druha odmocnina cisla je " << odmocnina;


    return 0;
}
