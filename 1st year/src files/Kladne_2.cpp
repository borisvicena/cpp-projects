/*Vytvorte program, ktor� zist�, �i s��in dvoch cel�ch ��sel zadan�ch z kl�vesnice je
kladn�. Program vyp�e iba inform�ciu, �i je s��in kladn� alebo z�porn�. �lohu rie�te tak,
aby v programe nebol prev�dzan� samotn� v�po�et s��inu!*/
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
