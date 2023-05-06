#include<iostream>
using namespace std;

int main()
{
    int cislo;
    cout << "Zadajte lubovolne cislo: ";
    cin >> cislo;

    int cislica = cislo % 10;
    cout << "Posledna Cislica v cisle je: " << cislica;


    return 0;
}
