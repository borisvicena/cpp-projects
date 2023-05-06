/*Vytvorte program, ktorý spoèíta všetky hodnoty N- prvkového po¾a. Pole je zaplnené
vygenerovanými hodnotami z intervalu <a,b>.*/
#include<iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    const int N = 8;
    int poleCisel[N];

    cout << "Zadajte dolnu hranicu intervalu: ";
    int a;
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    int b;
    cin >> b;
    ///Zapis do pola
    for (int i=0; i<N; i++)
    {
        poleCisel[i] = a+rand()%(b-a+1);
    }

    ///Vypis pola
    for (int i=0; i<N; i++)
    {
        cout << poleCisel[i] << "  ";
    }
    cout << endl;

    int sucet =0;
    ///Sucet prvkov pola
    for (int i=0; i<N; i++)
    {
        sucet += poleCisel[i];
    }
    cout << "Sucet prvkov pola je " << sucet << endl;

    return 0;
}
