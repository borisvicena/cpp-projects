/*Vytvorte program na výpoèet ceny oplotenia pozemku v tvare štvorca. Zadaná bude
plocha pozemku v m2 a cena oplotenia za 1m.*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double plocha;
    cout << "Zadajte plochu pozemku: ";
    cin >> plocha;

    double cenaZaM;
    cout << "Zadajte cenu za meter: ";
    cin >> cenaZaM;

    double cenaSpolu;
    cenaSpolu = sqrt(plocha) * 4 * cenaZaM;
    cout << "Cena spolu je: " << cenaSpolu;



    return 0;
}
