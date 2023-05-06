#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    int bX;
    cout << "Zadajte X-ovu suradnicu Boba: ";
    cin >> bX;

    int bY;
    cout << "Zadajte Y-ovu suradnicu Boba: ";
    cin >> bY;

    int aX;
    cout << "Zadajte X-ovu suradnicu Alice: ";
    cin >> aX;

    int aY;
    cout << "Zadajte Y-ovu suradnicu Alice: ";
    cin >> aY;


    int N;
    cout << "Zadajte pocet krokov: ";
    cin >> N;

    bool stretnutie = false;

    for (int i = 1; i <= N; i++)
    {
        int nahC;
        nahC = 1 + rand()%4;

        switch(nahC)
        {
            case 1: bX--;break;
            case 2: bX++;break;
            case 3: bY++;break;
            case 4: bY--;break;
        }
        switch(nahC)
        {
            case 1: aX--;break;
            case 2: aX++;break;
            case 3: aY++;break;
            case 4: aY--;break;
        }

        if (bX == aX and bY == aY){
            cout << "stretli sa v bodoch " << "[" << bX <<  " a "<< aY << "]" << endl;
        }
        else {
        cout << "nestretli sa" << endl;
        }
    }
    return 0;
}
