/*Vytvor program na výpis znakov ASCII tabu¾ky. V jednom ståpci bude decimálna
hodnota znaku a v druhom ståpci samotný znak*/
#include<iostream>
using namespace std;

int main(){

    for (int i = 0; i < 255; i++){
        cout << i << "   " << char(i) << endl;
    }

    return 0;
}
