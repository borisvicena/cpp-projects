/*Vytvorte program, ktorı po zadaní dvoch celıch èísel vypíše ich súèet, ak stlaèíme s,
rozdiel, ak r, súèin, ak stlaèíme n a podiel ak stlaèíme p. Program musí po spustení
a zadaní èísel ponúknu jednoduché menu, aby pouívate¾ vedel èo má robi.*/
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte prve cislo: ";
    int cislo1;
    cin >> cislo1;

    cout << "Zadajte druhe cislo: ";
    int cislo2;
    cin >> cislo2;

    char operacia;
    cout << endl;
    cout << "Zadajte s pre sucet " << endl;
    cout << "Zadajte r pre rozdiel " << endl;
    cout << "Zadajte n pre sucin " << endl;
    cout << "Zadajte p pre podiel " << endl;
    cin >> operacia;

    int sucet, rozdiel, sucin;
    double podiel;

    switch (operacia){

        case 's': sucet = cislo1 + cislo2;
                  cout << "Sucet je " << sucet << endl;
                  break;
        case 'r': rozdiel = cislo1 - cislo2;
                  cout << "Rozdiel je " << rozdiel << endl;
                  break;
        case 'n': sucin = cislo1 * cislo2;
                  cout << "Sucin je " << sucin << endl;
                  break;
        case 'p': if (cislo2 != 0){

                    podiel = (double)cislo1 / cislo2;
                    cout << "Podiel je " << podiel << endl;
                  }
                  else {

                    cout << "0 sa delit neda!!!" << endl;
                  }
                  break;
        default:  cout << "Zla volba operacie!" << endl;
                  break;

    }


    return 0;
}
