 /*Vytvorte program, ktorý do každého prvku 5-prvkového po¾a, zapíše hodnotu 100.
Program následne vypíše hodnoty jednotlivých prvkov po¾a.
Úlohu riešte bez použitia cyklov. */
#include<iostream>
using namespace std;

int main()
{
    ///Deklaracia a vytvorenie pola

    int cisla[5];

    cout << cisla[0] << endl;
    cout << cisla[1] << endl;
    cout << cisla[2] << endl;
    cout << cisla[3] << endl;
    cout << cisla[4] << endl;

    cisla[0]=100;
    cisla[1]=100;
    cisla[2]=100;
    cisla[3]=100;
    cisla[4]=100;

    cout << cisla[0] << endl;
    cout << cisla[1] << endl;
    cout << cisla[2] << endl;
    cout << cisla[3] << endl;
    cout << cisla[4] << endl;

    cisla[2]=18;
    cout << cisla[0] << endl;
    cout << cisla[1] << endl;
    cout << cisla[2] << endl;
    cout << cisla[3] << endl;
    cout << cisla[4] << endl;

    return 0;
}
