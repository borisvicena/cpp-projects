//Vytvorte program, ktor� spo��ta N ��sel zadan�ch z kl�vesnice
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte pocet cisel na spocitanie: ";
    int N;
    cin >> N;

    int sucet = 0;

    int i = 1;
    while(i<=N){
        int cislo;
        cout << "Zadajte " << i << ". cislo: ";
        cin >> cislo;
        sucet = sucet + cislo;
        i++;
    }
    cout << "Sucet cisel je " << sucet << endl;


    return 0;
}
