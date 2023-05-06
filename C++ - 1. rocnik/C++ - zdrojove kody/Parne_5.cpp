/*Vytvorte program, ktorý vypíše všetky párne èísla z intervalu <a,b>. Hranice intervalu sú
¾ubovolné celé èísla*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte lubovolne prve cislo: ";
    int a;
    cin >> a;

    cout << "Zadajte lubovolne druhe cislo: ";
    int b;
    cin >> b;



    while (a != b){

        if (a%2==0){

            cout << a << endl;
        }
        a++;
    }
    return 0;
}
