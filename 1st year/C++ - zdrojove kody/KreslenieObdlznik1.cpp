/*Vytvorte program, ktorı zo znaku, zadaného z klávesnice, vykresli obdånik. Program si
najskôr vyiada znak, ktorım bude kresli. Potom budú zadané dve èísla – dåka a šírka
obdånika. Následne program vykreslí obdånik, napr.    ******
                                                        ******
                                                        ******
*/
#include<iostream>
using namespace std;

int main(){

    char znak;
    cout << "Zadajte znak: ";
    cin >> znak;

    int stranaA, stranaB;
    cout << "Zadajte stranu A: ";
    cin >> stranaA;
    cout << "Zadajte stranu B: ";
    cin >> stranaB;

    for(int i = 1; i <= stranaB; i++){
        for (int j = 1; j <= stranaA; j++){
        cout << znak;
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
