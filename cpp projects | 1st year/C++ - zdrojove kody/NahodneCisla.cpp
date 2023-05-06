//Ukazka generovania nahodnych cisel
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){

    srand((unsigned)time(NULL)); ///inicializacia generatora rand()


    for (int i = 1; i <= 10; i++){
        int nahCislo = rand()%101;
        cout << nahCislo << endl;
    }


    return 0;
}
