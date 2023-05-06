//Vytvorte program na výpoèet objemu valca. PI zadajte ako konštantu
#include<iostream>
using namespace std;

int main()
{
    const double PI = 3.1416;

    double polomer;
    cout << "Zadajte polomer: ";
    cin >> polomer;

    double vyska;
    cout << "Zadajte vysku valca: ";
    cin >> vyska;

    double objem = PI * polomer * polomer * vyska;
    cout << "Objem valca je " << objem << endl;

    return 0;
}
