/*Vytvorte program na výpoèet dåžky kružnice. Hodnotu PI zadajte v programe ako
konštantu*/
#include<iostream>
using namespace std;

int main()
{
    double polomer;
    cout << "Zadajte polomer: ";
    cin >> polomer;

    const double PI = 3.1416;

    double dlzka = 2 * PI * polomer;
    cout << "Dlzka kruznice je " << dlzka << endl;



    return 0;
}
