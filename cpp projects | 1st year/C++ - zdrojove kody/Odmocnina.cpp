//Vytvorte program na v�po�et druhej odmocniny z ��sla zadan�ho z kl�vesnice.
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
