/*Vytvorte program na v�po�et d�ky kru�nice. Hodnotu PI zadajte v programe ako
kon�tantu*/
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
