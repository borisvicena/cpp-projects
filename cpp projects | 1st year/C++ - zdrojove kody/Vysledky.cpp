/*Vytvorte program, ktor� si vy�iada Va�e meno, priezvisko, adresu, skratky piatich
predmetov a n�sledne zn�mky z uveden�ch predmetov. Potom vyp�e zadan� hodnoty aj s
priemerom zadan�ch zn�mok v tvare:
Jan Novy
Bezrucova 26
945 45 Bratislava
SJL 1
MAT 2
FYZ 2
VYT 2
ELE 3
Priemer: 2.2
*/
#include<iostream>
using namespace std;

int main()
{
    string menoPriezvisko;
    cout << "Zadajte Vase meno a priezvisko: ";
    cin >> menoPriezvisko;

    string adresa1;
    cout << "Zadajte Vasu adresu(ulica, cislo): ";
    cin >> adresa1;

    string adresa2;
    cout << "Zadajte Vase PSC: ";
    cin >> adresa2;

    string predmet1;
    cout << "Zadakte lubovolny predmet1: ";
    cin >> predmet1;

    string predmet2;
    cout << "Zadajte lubovolny predmet2: ";
    cin  >> predmet2;

    string predmet3;
    cout << "Zadajte lubovolny predmet3: ";
    cin >> predmet3;







    return 0;
}
