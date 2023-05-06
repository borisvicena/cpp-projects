#include<iostream>
using namespace std;

int main()
{
    int cislo1 = 15;
    int cislo2 = 6;

    cislo1 = cislo1 + cislo2;
    cislo2 = cislo1 - cislo2;
    cislo1 = cislo1 - cislo2;

    cout << cislo1 << endl;
    cout << cislo2 << endl;

    return 0;
}
