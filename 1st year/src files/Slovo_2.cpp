//Vytvorte program, ktor� Nx pod seba vyp�e �ubovo�n� slovo.
#include<iostream>
using namespace std;

int main(){

    cout << "Zadajte kolkokrat chcete lubovolne slovo opakovat: ";
    int N;
    cin >> N;

    cin.ignore();
    cout << "Zadajte lubovolne slovo: ";
    string slovo;
    getline(cin, slovo);

    int i = 1;

    while(i <= N){

        cout << i << ". " << slovo << endl;
        i++;
    }

    return 0;
}
