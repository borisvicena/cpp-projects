//Vytvorte program, ktorý po zadaní èísla od 1 do 7, vypíše príslušný deò v týždni.
#include<iostream>
using namespace std;

int main(){

    int den;
    cout << "Zadajte cislo dna: ";
    cin >> den;

    switch (den)
    {
        case 1: cout << "Pondelok" << endl;
            break;
        case 2: cout << "Utorok" << endl;
            break;
        case 3: cout << "Streda" << endl;
            break;
        case 4: cout << "Stvrtok" << endl;
            break;
        case 5: cout << "Piatok" << endl;
            break;
        case 6: cout << "Sobota" << endl;
            break;
        case 7: cout << "Nedela" << endl;
            break;
        default: cout << "Nespravne cislo dna" << endl;
            break;
    }
    return 0;

}
