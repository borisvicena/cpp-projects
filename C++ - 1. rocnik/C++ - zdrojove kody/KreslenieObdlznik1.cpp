/*Vytvorte program, ktor� zo znaku, zadan�ho z kl�vesnice, vykresli obd�nik. Program si
najsk�r vy�iada znak, ktor�m bude kresli�. Potom bud� zadan� dve ��sla � d�ka a ��rka
obd�nika. N�sledne program vykresl� obd�nik, napr.    ******
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
