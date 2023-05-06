#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){

    srand((unsigned)time(NULL));

    cout << "Zadajte pocet prvkov pola: ";
    int N;
    cin >> N;

    int pole[N];
    int k;
    int a;
    int b;

    for(int i=0; i < N; i++){
        k = a + rand()% (b - a + 1);
        pole[i] = k;
    }

    for(int i=0; i<N; i++){
        cout <<  i << " " << pole[i] << ", ";
        cout << endl;
    }
    cout << "----------REVERSE----------\n";
    reverse(pole, pole + N);

    for(int i=0; i<N; i++){
        cout << i << " " << pole[i] << endl;
    }


    return 0;
}
