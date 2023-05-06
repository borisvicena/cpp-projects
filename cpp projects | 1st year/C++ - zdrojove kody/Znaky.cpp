//Ukazka prace so znakovymi premennymi
#include<iostream>
using namespace std;

int main()
{
    char znak;
    znak='R';

    cout << znak << endl;
    cout << int(znak) << endl;

    int cislo=99;
    cout << cislo << endl;
    cout << char(cislo) << endl;

    char znak1 = 'A';
    cout << int(znak1) << endl;
    znak1=znak1+2;
    cout << znak1 << endl;

    cout << "Zadajte znak: ";
    char znak2;
    cin >> znak2;
    cout << "Zadali ste znak: " << znak2 << endl;
    znak2=znak2+10;
    cout << znak2 << endl;

    cout << "Programujeme\tv jazyku C++. \n";


    return 0;
}
