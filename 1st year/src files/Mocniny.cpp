/*Navrhnite program na vytvorenie tabu�ky tret�ch mocn�n cel�ch ��sel od a do b. V prvom
st�pci bud� ��sla od a do b; v druhom st�pci tretie mocniny.*/
#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Zadajte dolnu hranicu intervalu: ";
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    cin >> b;

    for (int i = a; i <= b; i++){
        cout << i << "    " << i*i*i << endl;
    }


    return 0;
}
