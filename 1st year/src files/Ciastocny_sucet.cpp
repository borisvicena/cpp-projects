 /*Navrhni program, ktorı bude postupne sèítava èísla tak, ako ich budeme zadáva
z klávesnice (napr. „Ciastocny sucet je: 15“ atï.). Po zadaní hodnoty 0 cyklus skonèí a
vypíše sa napr.: „Celkovy sucet je: 150“*/
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
