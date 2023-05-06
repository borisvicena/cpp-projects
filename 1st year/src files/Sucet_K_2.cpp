/*Navrhnite program, ktor� umo�n� postupne generova� cel� n�hodn� ��sla z intervalu
<a,b>. Generovanie bude ukon�en� vtedy, ke� s��et zatia� vygenerovan�ch ��sel prekro��
hodnotu K. Program potom vyp�e po�et vygenerovan�ch ��sel a ich s��et. (Hodnota K
bude zadan� e�te pred generovan�m ��sel)*/
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<ctime>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    int K;
    cout << "Zadajte hodnotu pri ktorej cyklus skonci: ";
    cin >> K;

    int a;
    cout << "Zadajte dolnu hranicu intervalu: ";
    cin >> a;

    int b;
    cout << "Zadajte hornu hranicu intervalu: ";
    cin >> b;

    int sucet = 0;
    int pocet = 0;
    while (sucet <= K){
        int nahCislo = a+rand()%(b-a+1);
        sucet += nahCislo;
        cout << nahCislo << "   ";
        pocet++;
    }
    cout << endl;
    cout << "Pocet cisel je " << pocet << endl;
    cout << "Sucet nahodnych cisel z intervalu " << a << " - " << b << " je : " << sucet << endl;


    return 0;
}
