
#include <iostream>
using namespace std;

int main()
{
    //Nasleduje definicia struktury
    struct osoba
    {
        string meno;
        short vek;
        float vyska;
    };

    //Nasleduje deklaracia strukturovanej premennej ziak typu osoba
    //Premenna ziak je vytvorena v zasobniku!
    osoba ziak;

    //Vstup �dajov do jednotliv�ch polo�iek �trukt�ry
    getline(cin,ziak.meno);
    cin >> ziak.vek;
    cin >> ziak.vyska;

    //V�stup �dajov z jednotliv�ch polo�iek �trukt�ry
    cout << ziak.meno << '\n';
    cout << ziak.vek << '\n';
    cout << ziak.vyska << '\n';

    return 0;
}
