/*Vytvorte program, ktorý zistí a vypíše pozíciu prvku s maximálnou hodnotou Nprvkového
po¾a. Pole je zaplnené vygenerovanými hodnotami z intervalu <a,b>.*/
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    cout << "Zadajte dolnu hranicu intervalu: ";
    int a;
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    int b;
    cin >> b;

    const int N = 10;
    int pole[N];

    ///Zapis do pola
    for(int i=0; i<N; i++){
        pole[i] = a+rand()%(a-b+1);
    }

    ///Vypis pola
    int pozicia = 0;
    for(int i=0; i<N; i++){
        pozicia++;
        cout << pozicia << ". " << pole[i] << endl;
    }
    cout << endl;

    ///Hladanie maximalnej hodnoty v poli
    int maxHodnota = pole[0];
    int mPozicia = 0;
    for(int i=0; i<N; i++){
        if(pole[i] > maxHodnota){
            maxHodnota = pole[i];
            mPozicia = i;
        }
    }
    cout << "Maximalna hodnota v poli je: " << maxHodnota << endl;
    cout << "Pozicia maximalnej hodnoty v poli je: " << mPozicia << endl;


    return 0;
}
