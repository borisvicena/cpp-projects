/*Vytvorte program, ktor� do N- prvkov�ho po�a na��ta �ubovo�n� celo��seln� hodnoty,
zad�van� z kl�vesnice. Po zadan� poslednej hodnoty, program obsah cel�ho po�a vyp�e.*/
#include<iostream>
using namespace std;

int main(){

    const int N = 8;

    int poleCisel[N];

    ///Zapis do pola
    for(int i=0;i<=N;i++)
    {
        cout << "Zadajte " << i+1 << ". cislo: ";
        cin >> poleCisel[i];
    }

    ///Vypis pola
    for(int i=0; i<=N;i++)
    {
        cout << poleCisel[i] << "   ";
    }
    cout << endl;

    return 0;
}
