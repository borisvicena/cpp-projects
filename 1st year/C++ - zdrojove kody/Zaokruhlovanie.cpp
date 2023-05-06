//Pouzitie funkcii na zaokruhlovanie desatinnych cisel
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double cislo = 27.32478;

    double zaokruhlene = round(cislo * 1000) / 1000;
    cout << zaokruhlene << endl;



    return 0;
}
