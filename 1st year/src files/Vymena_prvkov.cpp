#include<iostream>
#include<ctime>
#include<cmath>
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

    const int N = 20;
    int pole[N];
    ///Zapis do pola
    for(int i=0; i<N; i++){
        pole[i]= a+rand()%(a-b+1);
    }

    ///Vypis pola
    cout << "Pole pred zamenou" << endl;
    for(int i=0; i<N; i++){
        cout << pole[i] << "  ";
    }
    cout << endl;

    ///Zamena prvkov v poli
    for(int i=0; i<N/2; i++){
        int tmp=pole[i];
        pole[i]=pole[N-i-1];
        pole[N-i-1]=tmp;
    }

    ///Pole po zamene
    cout << "Pole po zamene" << endl;
    for(int i=0; i<N; i++){
        cout << pole[i] << "  ";
    }
    cout << endl;



    return 0;
}
