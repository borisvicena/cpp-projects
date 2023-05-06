/*Vytvorte program, ktor� spo��ta N cel�ch n�hodn�ch ��sel, ktor� boli vygenerovan�
z intervalu <a,b>*/
#include<iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    cout << "Zadajte pocet cisel: ";
    int N;
    cin >> N;

    int a,b;
    cout << "Zadajte dolnu hranicu intervalu: ";
    cin >> a;
    cout << "Zadajte hornu hranicu intervalu: ";
    cin >> b;

    int sucet = 0;

    for (int i = 1; i <= N; i++){
            int nahCislo = a + rand()%(b-a+1);
            cout << nahCislo << endl;
            sucet+=nahCislo;
    }
    cout << "Sucet je " << sucet << endl;

    return 0;
}
