/*Navrhnite program, ktorı umoní postupne generova celé náhodné èísla z intervalu
<a,b>. Generovanie bude ukonèené vtedy, keï súèet zatia¾ vygenerovanıch èísel prekroèí
hodnotu K. Program potom vypíše poèet vygenerovanıch èísel a ich súèet. (Hodnota K
bude zadaná ešte pred generovaním èísel)*/
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
