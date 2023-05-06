/*Vytvorte program, ktorý vypíše všetky párne èísla z intervalu <a,b>. Predpokladáme, že
hranice intervalu a,b sú tiež párne.*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte prve cislo: ";
    int a;
    cin >> a;

    cout << "Zadajte druhe cislo: ";
    int b;
    cin >> b;

    int i = a;
    while(i <= b){

        cout << i << endl;
        i+=2;
    }

    return 0;
}
