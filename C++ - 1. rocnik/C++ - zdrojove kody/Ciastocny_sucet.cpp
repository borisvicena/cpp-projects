 /*Navrhni program, ktor� bude postupne s��tava� ��sla tak, ako ich budeme zad�va�
z kl�vesnice (napr. �Ciastocny sucet je: 15� at�.). Po zadan� hodnoty 0 cyklus skon�� a
vyp�e sa napr.: �Celkovy sucet je: 150�*/
#include<iostream>
using namespace std;

int main(){
    int sucet = 0;

    for (int i = 1;;i++){
        int cislo;
        cout << "Zadajte " << i << ". cislo: ";
        cin >> cislo;

        if (cislo != 0){
            sucet+=cislo; // sucet = sucet + cislo;
            cout << "Ciastocny sucet je: " << sucet << endl;
        }
        else{
            break;
        }
    }
    cout << "Celkovy sucet je " << sucet << endl;

    return 0;
}
