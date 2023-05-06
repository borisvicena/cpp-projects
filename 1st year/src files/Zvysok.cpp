//Vytvorte program, ktorý vypoèíta zvyšok po delení dvoch celých èísel
#include<iostream>
using namespace std;

int main()
{

    int cislo1;
    cout << "Zadajte cislo 1: ";
    cin >> cislo1;

    int cislo2;
    cout << "Zadajte cislo 2: ";
    cin >> cislo2;

    int zvysok = cislo1 && cislo2;
    cout << "Zvysok po deleni je " << zvysok << endl;

    return 0;
}
