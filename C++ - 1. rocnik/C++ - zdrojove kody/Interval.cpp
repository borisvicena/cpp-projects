/*Vytvorte program, ktor� zist�, �i cel� ��slo zadan� z kl�vesnice je z intervalu <a,b>.
Hranice intervalu bud� tie� cel� ��sla, zadan� z kl�vesnice. Ak zadan� ��slo bude
z intervalu <a,b>, tak program vyp�e, napr. �Zadane cislo 25 je z intervalu <5,35>�.
Ak zadan� ��slo nebude z intervalu, tak sa vyp�e, napr. �Zadane cislo 15 nie je z intervalu
<25,60>�.*/
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
