/*Vytvorte program, ktor� po zadan� �ubovo�n�ho znaku z kl�vesnice, vyp�e tento znak
trikr�t za sebou. Napr.: zad�me * a program vyp�e ***  */
#include<iostream>
using namespace std;

int main()
{
    char znak;
    cout << "Zadajte lubovolny znak: ";
    cin >> znak;
    cout << znak  << znak << znak << endl;



    return 0;
}
