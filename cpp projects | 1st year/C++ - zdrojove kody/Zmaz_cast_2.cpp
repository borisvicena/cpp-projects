/*. Zmaz_cast_2
Vytvorte program, ktorı zmae prvú polovicu reazca. Ak je ve¾kos reazca nepárne
èíslo N, tak program zmae (N+1)/2 prvıch znakov. */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string veta;
    cout << "zadajte vetu: ";
    getline(cin, veta);

    veta.erase(0, (veta.length()+1)/2);


    cout << "slovo po uprave je: " << veta << endl;

    return 0;
}
