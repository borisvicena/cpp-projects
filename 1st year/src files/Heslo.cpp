/*Heslo
Vytvorte program, ktor� zist�, �i re�azec znakov zadan� z kl�vesnice je zhodn� s heslom,
zadan�m v programe ako re�azcov� liter�l. Ak bude zadan� spr�vne heslo, tak program
vyp�e �Zadali ste spravne heslo�. Ak bude zadan� nespr�vne heslo, tak sa vyp�e �Zadali
ste nespr�vne heslo�.*/
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
