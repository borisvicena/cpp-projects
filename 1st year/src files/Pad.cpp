/*Vytvorte program, ktor� vypo��ta za ak� �as dopadne na Zem teleso s v��ky h. Gravita�n�
zr�chlenie g bude zadan� ako kon�tanta rovn� 9.81ms-2.*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const double G = 9.81;

    double vyska;
    cout << "Zadajte vysku: ";
    cin >> vyska;


    double cas = sqrt(2 * vyska / G );
    cas = round(cas * 1000) / 1000;
    cout << "Cas dopadu telesa je: " << cas << " s."<< endl;


    return 0;
}
