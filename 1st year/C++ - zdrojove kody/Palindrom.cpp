#include<iostream>
#include<ctime>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){

    string slovo;
    cout << "Zadajte slovo: ";
    getline(cin, slovo);

    bool jePalindrom = true;

    for(int i = 0; i < slovo.length()/2; i++){
        if(slovo[i] != slovo[slovo.length()-i-1]){
            cout << slovo << " nie je palindrom" << endl;
            return 0;
        }
    }
    cout << slovo << " je palindrom" << endl;
    return 0;
}
