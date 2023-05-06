/*Vytvorte program, ktorý spoèíta hodnoty poslednych p prvkov N- prvkového po¾a. Pole je
zaplnené vygenerovanými hodnotami z intervalu <a,b>.*/
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(){

    cout << "Zadajte dolnu hranicu intervalu: ";
    int a;
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    int b;
    cin >> b;

    cout << "Zadajte kolko poslednych prvkov pola spocita: ";
    int p;
    cin >> p;

    const int N = 100;
    int pole[N];

    srand((unsigned)time(NULL));

    ///Zapis do pola
    for(int i=0; i<N; i++){
        pole[i] = a+rand()%(b-a+1);
    }

    ///Vypis pola
    for(int i=0; i<N; i++){
        cout << pole[i] <<  "  ";
    }
    cout << endl;

    ///Sucet poslednych hodnot
    int sucet=0;
    for(int i=N-p;i<N;i++){
        sucet = sucet + pole[i];
    }
    cout<< "Vypis poslednych prvkov pola je: " << sucet << endl;

    return 0;
}
