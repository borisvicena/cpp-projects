/*Vytvorte program, ktorý zistí, èi súèin dvoch celých èísel zadaných z klávesnice je
kladný. Program vypíše iba informáciu, èi je súèin kladný alebo záporný. Úlohu riešte tak,
aby v programe nebol prevádzaný samotný výpoèet súèinu!*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte prve cislo: ";
    int cislo1;
    cin >> cislo1;

    cout << "Zadajte druhe cislo: ";
    int cislo2;
    cin >> cislo2;

    if ((cislo1 > 0 && cislo2 > 0) || (cislo1 < 0 && cislo2 < 0)){

        cout << "Vysledok je kladny. " << endl;
    }
    else{

        cout << "Vysledok je zaporny. " << endl;
    }
    return 0;

}
