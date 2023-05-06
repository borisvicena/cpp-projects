/*Vytvorte program, ktorı vypoèíta hodnotu BMI (Body Mass Index):
BMI = hmotnos v kg / (vıška v m)2
Vıstup napr.: „Vase BMI je 19.58“*/
#include<iostream>
using namespace std;

int main()
{
    double hmotnost;
    cout << "Zadajte vasu hmotnost: ";
    cin >> hmotnost;

    double vyska;
    cout << "Zadajte vasu vysku: ";
    cin >> vyska;

    double bmi;
    bmi = hmotnost / (vyska * vyska);
    cout << "Vase BMI je " << bmi << ".";


    return 0;
}
