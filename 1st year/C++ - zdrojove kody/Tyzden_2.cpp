#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte cislo dna: ";
    int den;
    cin >> den;

    switch (den){

        case 1:

        case 2:

        case 3:

        case 4:

        case 5: cout << "Pracovny den" << endl;
            break;
        case 6:

        case 7: cout << "Volny den" << endl;
            break;
        default: cout << "Nespravne cislo dna" << endl;
            break;
    }
    return 0;
}
