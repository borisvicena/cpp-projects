//Vytvorte program, ktorý vypíše všetky celé èísla od a do b
#include<iostream>
using namespace std;

int main(){

    cout << "Od: ";
    int a;
    cin >> a;

    cout << "Do: ";
    int b;
    cin >> b;

    int i = a;
    while (i<=b){

        cout << i << endl;
        i++;
    }



    return 0;
}
