/*Vytvorte program, ktor� vyp�e v�etky p�rne ��sla z intervalu <a,b>. Hranice intervalu s�
�ubovoln� cel� ��sla*/
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
