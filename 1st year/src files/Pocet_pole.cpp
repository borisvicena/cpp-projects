/*Vytvorte program, ktor� v N- prvkovom poli zist� a vyp�e po�et ��sel delite�n�ch dvomi
a po�et ��sel delite�n�ch tromi . Pole je zaplnen� vygenerovan�mi hodnotami z intervalu
<a,b>.*/
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    cout << "Zadajte dolnu hranicu intervalu: ";
    int a;
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    int b;
    cin >> b;

    const int N = 100;
    int pole[N];

    ///Zapis do pola
    for(int i=0; i<N;i++){
        pole[i] = a+rand()%(a-b+1);
    }

    ///Vypis pola
    for(int i=0; i<N; i++){
        cout << pole[i] << "  ";
    }
    cout << endl;

    ///Delitelne cislom 2 a cislo 3
    int pocet2 = 0;
    int pocet3 = 0;

    for(int i=0; i<N; i++){
        if(pole[i]%2==0){
            pocet2++;
        }

        if(pole[i]%3==0){
        pocet3++;
        }
    }
    cout << "Pocet cisel delitelnych cislom dva je: " << pocet2 << endl;
    cout << "Pocet cisel delitelnych cislom tri je: " << pocet3 << endl;

    return 0;
}
