/*Vytvorte program, ktorý do každého prvku 5-prvkového po¾a, zapíše hodnotu 100.
Program následne vypíše hodnoty jednotlivých prvkov po¾a.
Úlohu riešte s použitím cyklov.*/
#include<iostream>
using namespace std;

int main(){

    int poleCisel[5];

    ///Zapis do pola
    for (int i=0; i<=5;i++)
    {
        poleCisel[i]=100;

    }

    ///Vypis pola
    for (int i=0; i<5; i++)
    {
        cout << poleCisel[i] << "    ";
    }
    cout << endl;
    return 0;
}
