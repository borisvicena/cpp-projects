/*Z kl�vesnice bude postupne zadan�ch N celo��seln�ch hodn�t. Vytvorte program, ktor�
spo��ta v�etky nep�rne zadan� ��sla a vyp�e aj ich po�et.*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte pocet cisel na spocitanie: ";
    int N;
    cin >> N;

    int sucetNeparnych = 0;
    int pocetNeparnych = 0;

    int i = 1;
    while (i <= N){
        int cislo;
        cout << "Zadajte " << i << ". cislo : ";
        cin >> cislo;
        if (cislo % 2 != 0){
            sucetNeparnych+=cislo;
            pocetNeparnych++;
        }
        i++;
    }
    cout << "Sucet neparnych cisel je " << sucetNeparnych << endl;
    cout << "Pocet neparnych cisel je " << pocetNeparnych << endl;

    return 0;
}
