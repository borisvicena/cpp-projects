#include<iostream>
#include<ctime>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(){

    string veta;
    cout << "Zadajte vetu: ";
    getline(cin, veta);

    int pocetMedz;
    int dlzka=veta.length();
    ///Z kolkych slov sa sklada veta
    for(int i=0; i<veta.length(); i++){
        if(veta[i] == ' '){
            pocetMedz++;
        }
    }
    cout << "Pocet slov vo vete je: " << pocetMedz+1 << endl;


    return 0;
}
