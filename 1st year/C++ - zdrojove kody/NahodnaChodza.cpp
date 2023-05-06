#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    int suradnicaX;
    cout << "Zadajte X-ovu suradnicu: ";
    cin >> suradnicaX;

    int suradnicaY;
    cout << "Zadajte Y-ovu suradnicu: ";
    cin >> suradnicaY;

    int N;
    cout << "Zadajte pocet krokov: ";
    cin >> N;

    int pocX = suradnicaX;
    int pocY = suradnicaY;


    for (int i = 1; i <= N; i++)
    {
        int nahC;
        nahC = 1 + rand()%4;

        switch(nahC)
        {
            case 1: suradnicaX--;break;
            case 2: suradnicaX++;break;
            case 3: suradnicaY++;break;
            case 4: suradnicaY--;break;

        }
    //cout << i << ".krok - pozicia [" << suradnicaX << "," << suradnicaY << "]" << endl;
    }
    cout << "["  << suradnicaX << "," << suradnicaY << "]" << endl;

    double vzdialenost = sqrt((pocX - suradnicaX)*(pocX - suradnicaX) + (pocY - suradnicaY)*(pocY - suradnicaY));
    cout << "Prejdena vzdialenost " << vzdialenost << endl;

    return 0;
}
