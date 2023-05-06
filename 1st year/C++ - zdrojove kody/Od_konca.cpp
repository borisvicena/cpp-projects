#include<iostream>
#include<ctime>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(){

    string veta;
    cout << "Zadajte vetu: ";
    getline(cin, veta);

    ///Vypis vety od konca
    for(int i=veta.length()-1; i>=0; i--){
        cout << veta[i];
    }
    cout << endl;
    return 0;
}
