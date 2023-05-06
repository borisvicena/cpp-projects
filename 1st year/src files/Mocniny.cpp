/*Navrhnite program na vytvorenie tabu¾ky tretích mocnín celých èísel od a do b. V prvom
ståpci budú èísla od a do b; v druhom ståpci tretie mocniny.*/
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
