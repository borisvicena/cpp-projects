/*Vytvorte program, ktor� vypo��ta polomer kruhu, ktor�ho obsah bude zadan� z
kl�vesnice.*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double obsah;
    cout << "Zadajte obsah: ";
    cin >> obsah;

    const double PI = 3.1415;

    double polomer;
    polomer = sqrt(obsah / PI);
    cout << "Plomer je " << polomer;

    return 0;
}
