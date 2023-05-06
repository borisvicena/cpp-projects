#include<iostream>
using namespace std;

int main(){

    char znak;
    cout << "Zadajte znak: ";
    cin >> znak;

    int strana;
    cout << "Zadajte velkost strany: ";
    cin >> strana;

    for (int i = 1; i <= strana; i++){
        for (int j = 1; j <= i; j++){
            cout << znak;
        }
        cout << endl;
    }
    return 0;
}
