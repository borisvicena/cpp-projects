/*. Zmaz_cast_2
Vytvorte program, ktor� zma�e prv� polovicu re�azca. Ak je ve�kos� re�azca nep�rne
��slo N, tak program zma�e (N+1)/2 prv�ch znakov. */
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
