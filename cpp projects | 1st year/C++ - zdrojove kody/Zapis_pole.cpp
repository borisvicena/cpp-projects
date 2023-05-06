/*Vytvorte program, ktorý do N- prvkového po¾a naèíta ¾ubovo¾né celoèíselné hodnoty,
zadávané z klávesnice. Po zadaní poslednej hodnoty, program obsah celého po¾a vypíše.*/
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
