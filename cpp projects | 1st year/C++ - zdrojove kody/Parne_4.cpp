/*Vytvorte program, ktor� vyp�e v�etky p�rne ��sla z intervalu <a,b>. Predpoklad�me, �e
hranice intervalu a,b s� tie� p�rne.*/
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
