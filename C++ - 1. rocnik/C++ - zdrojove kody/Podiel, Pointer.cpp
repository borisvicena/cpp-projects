#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int hodnota1;
    int hodnota2;
    int* pHodnota1 = &hodnota1;
    int* pHodnota2 = &hodnota2;

    cout << "Zadajte hodnotu cislo 1: ";
    cin >> *pHodnota1;

    cout << "Zadajte hodnotu cislo 2: ";
    cin >> *pHodnota2;

    double podiel;
    double* pPodiel = &podiel;
    *pPodiel = (double)*pHodnota1/ *pHodnota2;
    cout << "Podiel zadanych hodnot je: " << *pPodiel << endl;
    return 0;
}
