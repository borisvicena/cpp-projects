
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

    //Vstup údajov do jednotlivých položiek štruktúry
    getline(cin,ziak.meno);
    cin >> ziak.vek;
    cin >> ziak.vyska;

    //Výstup údajov z jednotlivých položiek štruktúry
    cout << ziak.meno << '\n';
    cout << ziak.vek << '\n';
    cout << ziak.vyska << '\n';

    return 0;
}
