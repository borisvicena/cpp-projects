/*Vytvorte program, ktor� do ka�d�ho prvku 5-prvkov�ho po�a, zap�e hodnotu 100.
Program n�sledne vyp�e hodnoty jednotliv�ch prvkov po�a.
�lohu rie�te s pou�it�m cyklov.*/
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
