//Vytvorte program na v�po�et objemu gule. PI zadajte ako kon�tantu
#include<iostream>
using namespace std;

int main()
{
    const double PI = 3.1416;

    double polomer;
    cout << "Zadajte polomer: ";
    cin >> polomer;

    double objem = 4.0 / 3 * PI * polomer * polomer * polomer;
    cout << "Polomer Gule je " << objem << endl;

    return 0;
}
