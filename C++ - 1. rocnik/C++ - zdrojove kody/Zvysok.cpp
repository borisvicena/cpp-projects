//Vytvorte program, ktor� vypo��ta zvy�ok po delen� dvoch cel�ch ��sel
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
