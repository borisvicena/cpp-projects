//Ukazka prace s retazcami
#include<iostream>
using namespace std;

int main()
{
    //vytvorenie retazca
    string retazec;
    cout << retazec << endl;

    retazec = "Dnes je pondelok.";
    cout << retazec << endl;

    string veta = retazec+" Zajtra je utorok.";
    cout << veta << endl;

    //Vstup do retazca
    string veta1;
    cout << "Zadajte lubovolnu vetu: ";
    getline(cin, veta1);//cin >> veta1;
    cout << "Zadali ste vetu: " << veta1 << endl;

    int pocetZnakov = veta1.length();
    cout << "Pocet znakov v retazci je: " << pocetZnakov << endl;


    int cislo;
    cout << "Zadajte cislo: ";
    cin >> cislo;

    cin.ignore(); // vycistenie vstupno-vystupnaho prudu
    cout << "Zadajte retazec: ";
    getline(cin,veta1);
    cout << "Zadali ste retazec: " << veta1 << endl;





    return 0;
}
