/*Vytvorte program, ktorý spoèíta hodnoty prvých p prvkov N- prvkového po¾a. Pole je
zaplnené vygenerovanými hodnotami z intervalu <a,b>.*/
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){

    cout << "Zadajte dolnu hranicu intervalu: ";
    int a;
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    int b;
    cin >> b;

    cout << "Zadajte kolko prvych hodnot pola spocita: ";
    int p;
    cin >> p;

    const int N = 100;

    srand((unsigned)time(NULL));
    int pole[N];

    ///Zapis do pola
    for(int i=0; i<N; i++){
        pole[i] = a+rand()%(b-a+1);
    }

    ///Vypis pola
    for(int i=0; i<N; i++){
        cout << pole[i] << endl;
    }

    int sucet=0;
    for(int i=0;i<p;i++){
        sucet+=pole[i];
    }

    cout << "Sucet hodnot pola je: " << sucet << endl;

    return 0;
}
