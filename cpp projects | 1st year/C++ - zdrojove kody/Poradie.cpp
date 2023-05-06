/*Z klávesnice budú zadané tri celé èísla. Vytvorte program, ktorý ich vypíše v poradí od
najväèšieho po najmenšie.*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte prve cislo: ";
    int c1;
    cin >> c1;

    cout << "Zadajte druhe cislo: ";
    int c2;
    cin >> c2;

    cout << "Zadajte tretie cislo: ";
    int c3;
    cin >> c3;

    ///1.
    if (c1 > c2 && c2 >c3){

        cout << c1 << "." << c2 << "," << c3 << endl;
    }
    ///2.
    if (c1 > c3 && c3 >c2){

        cout << c1 << "." << c3 << "," << c2 << endl;
    }
    ///3.
    if (c2 > c1 && c1 >c3){

        cout << c2 << "." << c1 << "," << c3 << endl;
    }
    ///4.
    if (c2 > c3 && c3 >c1){

        cout << c2 << "." << c3 << "," << c1 << endl;
    }
    ///5.
    if (c3 > c2 && c2 >c1){

        cout << c3 << "." << c2 << "," << c1 << endl;
    }
    ///6.
    if (c3 > c1 && c1 >c2){

        cout << c3 << "." << c1 << "," << c2 << endl;
    }
    return 0;
}
