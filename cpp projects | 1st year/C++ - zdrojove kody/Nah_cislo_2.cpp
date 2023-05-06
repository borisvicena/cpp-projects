//Vytvorte program, ktorý vygeneruje N celých náhodných èísel z intervalu <a,b>
#include<iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    int N;
    cout << "Zadajte pocet cisel: ";
    cin >> N;

    int a, b;
    cout << "Zadajte dolnu hranicu intervalu: ";
    cin >> a;

    cout << "Zadajte hornu hranicu intervalu: ";
    cin >> b;

    for (int i = 1; i <= N; i++){
            int nahCislo = a+rand()%(b-a+1);
            cout << nahCislo << endl;

    }






    return 0;
}
