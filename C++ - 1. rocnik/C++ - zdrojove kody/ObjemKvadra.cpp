//Vytvorte program na v�po�et objemu kv�dra
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

    int objemKvadra;
    objemKvadra = stranaA * stranaB * stranaC;
    cout << objemKvadra << endl;

    return 0;
}
