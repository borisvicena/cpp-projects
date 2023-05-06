/*Vytvorte program, ktorý po zadaní ¾ubovo¾ného znaku z klávesnice, vypíše tento znak
trikrát za sebou. Napr.: zadáme * a program vypíše ***  */
#include<iostream>
using namespace std;

int main()
{
    char znak;
    cout << "Zadajte lubovolny znak: ";
    cin >> znak;
    cout << znak  << znak << znak << endl;



    return 0;
}
