//Vytvorte program na výpoèet obsahu kruhu. PI zadajte ako konštantu
#include<iostream>
using namespace std;

int main()
{
    const double PI = 3.1416;

    double polomer;
    cout << "Zadajte polomer kruhu: ";
    cin >> polomer;

    double obsah = PI * polomer * polomer;
    cout << "Obsah kruhu je " << obsah  << endl;

    return 0;
}
