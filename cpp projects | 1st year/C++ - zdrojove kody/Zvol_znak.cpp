#include<iostream>
#include<ctime>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(){

    string veta;
    cout << "Zadajte vetu: ";
    getline(cin, veta);

    cout << "Prvy znak vety: " << veta[0] << endl;
    cout << "Posledny znak vety: " << veta[veta.length()-1] << endl;
    cout << endl;

    cout << "Zadajte poradove cislo znaku: ";
    int poradie;
    cin >> poradie;

    cout << veta[poradie-1] << endl;

    ///Rozpis vety, kazdy znak na novom riadku
    cout << endl;
    cout << "kazdy znak na novom riakdu: " << endl;
    for(int i=0; i<veta.length(); i++){
        cout << veta[i] << endl;

    }

    return 0;
}
