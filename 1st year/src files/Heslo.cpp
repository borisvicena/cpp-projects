/*Heslo
Vytvorte program, ktorı zistí, èi reazec znakov zadanı z klávesnice je zhodnı s heslom,
zadanım v programe ako reazcovı literál. Ak bude zadané správne heslo, tak program
vypíše „Zadali ste spravne heslo“. Ak bude zadané nesprávne heslo, tak sa vypíše „Zadali
ste nesprávne heslo“.*/
#include<iostream>
using namespace std;

int main()
{
    string heslo;
    cout << "Zadajte heslo: ";
    getline(cin, heslo);

    if (heslo == "root")
    {
        cout << "Zadali ste spravne heslo." << endl;
    }
    else
    {
        cout << "Zadali ste nespravne heslo." << endl;
    }

    return 0;
}
