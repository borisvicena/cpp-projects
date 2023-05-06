///Ukazka deklaracii, definicii a volania vlastnych funkcii
#include<iostream>
using namespace std;

///prototypy funkcii
int sucet(int, int);
int rozdiel(int, int);

int main()
{
    int vysledok1 = sucet(10, 30); /// volanie funkcie sucet()
    cout << "Sucet je " << vysledok1 << endl;

    vysledok1 = sucet(45, 17);
    cout << "Sucet je " << vysledok1 << endl;

    int cislo1, cislo2;
    cout << "Zadajte prve cislo: ";
    cin >> cislo1;
    cout << "Zadajte druhe cislo:";
    cin >> cislo2;

    vysledok1 = sucet(cislo1, cislo2);///volanie funkcie sucet()
    cout << "Sucet cisla " << cislo1 << " a " << cislo2 << " je: " << vysledok1 << endl;

    vysledok1 = sucet(cislo2, 12);
    cout << "Sucet cisla " << cislo2 << " je: " << vysledok1 << endl;
    cout << endl << endl;
    cout << "----------------------\n";

    int c1, c2;
    cout << "Zadajte prvy rozdiel cisla: ";
    cin >> c1;
    cout << "Zadajte druhy rozdiel cisla:";
    cin >> c2;

    vysledok1 = rozdiel(c1, c2);
    cout << "Rozdiel je " << vysledok1 << endl;


    return 0;
}



///deklaracia a definicia funkcie sucet()
int sucet(int c1, int c2)
{
    int sucet;
    sucet = c1 + c2;
    return sucet;
}

///deklaracia a definicia funkcie rozdiel()
int rozdiel(int a, int b){
    int rozdiel;
    rozdiel = a - b;
    return rozdiel;
}
