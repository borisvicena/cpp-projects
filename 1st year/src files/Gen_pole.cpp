/*Vytvorte program, ktor� do N- prvkov�ho po�a vygeneruje �ubovo�n� celo��seln�
hodnoty z intervalu <a,b>. Po vygenerovan� poslednej hodnoty, program obsah cel�ho
po�a vyp�e.*/
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    cout << "Zadajte dolnu hranicu intervalu: ";
    int a;
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    int b;
    cin >> b;

    const int N = 80;

    int poleCisel[N];

    ///Zapis do pola
    for (int i=0; i<N; i++)
    {
        poleCisel[i] = a + rand()%(b-a+1);
    }

    ///Vypis pola
    for (int i=0; i<N; i++)
    {
        cout << poleCisel[i] << "  ";
    }
    cout << endl;

    return 0;
}
