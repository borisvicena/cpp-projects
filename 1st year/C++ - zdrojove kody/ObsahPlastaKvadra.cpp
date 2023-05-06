#include<iostream>
using namespace std;

int main()
{
    int stranaA;
    cout << "Strana A = ";
    cin >> stranaA;

    int stranaB;
    cout << "Strana B = ";
    cin >> stranaB;

    int stranaC;
    cout << "Strana C = ";
    cin >> stranaC;

    int obsahPlasta;
    obsahPlasta = 2 * (stranaA * stranaB + stranaA * stranaC + stranaB * stranaC);
    cout << "Obsah Plasta je " << obsahPlasta << endl;


    return 0;
}
