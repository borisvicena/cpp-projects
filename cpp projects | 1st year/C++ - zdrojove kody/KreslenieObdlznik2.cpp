#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){

    srand((unsigned)time(NULL));


    int stranaA, stranaB;
    stranaA = rand()%21;
    stranaB = rand()%21;

    for(int i = 1; i <= stranaB; i++){
        for (int j = 1; j <= stranaA; j++){
            char znak = char(int('A')+rand()%(int('Z')-int('A')+1));
            cout << znak;
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
