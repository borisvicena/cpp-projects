/*Vytvor program na v�pis znakov ASCII tabu�ky. V jednom st�pci bude decim�lna
hodnota znaku a v druhom st�pci samotn� znak*/
#include<iostream>
using namespace std;

int main(){

    for (int i = 0; i < 255; i++){
        cout << i << "   " << char(i) << endl;
    }

    return 0;
}
