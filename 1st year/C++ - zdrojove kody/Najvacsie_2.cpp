/*Z kl�vesnice bude zadan�ch N cel�ch ��sel. Vytvorte program, ktor� vyp�e najv��ie zo
zadan�ch ��sel.*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte pocet cisel na spocitanie: ";
    int N;
    cin >> N;

    cout << "Zadajte 1. cislo; ";
    int maximum;
    cin >> maximum;

    int i = 2;
    while (i <= N){
        cout << "Zadajte " << i << ". cislo: ";
        int cislo;
        cin >> cislo;
        if (cislo > maximum){
            maximum = cislo;
        }
        i++;
    }
    cout << "Najvacsie cislo je " << maximum << endl;

    return 0;
}
