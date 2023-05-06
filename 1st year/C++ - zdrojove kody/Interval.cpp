/*Vytvorte program, ktorý zistí, èi celé èíslo zadané z klávesnice je z intervalu <a,b>.
Hranice intervalu budú tiež celé èísla, zadané z klávesnice. Ak zadané èíslo bude
z intervalu <a,b>, tak program vypíše, napr. „Zadane cislo 25 je z intervalu <5,35>“.
Ak zadané èíslo nebude z intervalu, tak sa vypíše, napr. „Zadane cislo 15 nie je z intervalu
<25,60>“.*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte cislo: ";
    int cislo;
    cin >> cislo;

    if (cislo >= 2 && cislo <= 15){

        cout << "Cislo " << cislo << " sa nachadza v intervaloch <2, 15>. " << endl;
    }
    else {

        cout << "Cislo " << cislo << " sa nenachadza v intervaloch <2, 15>. " << endl;
    }

    return 0;
}
