/*Vytvorte program, ktor� vypo��ta hodnotu BMI (Body Mass Index):
BMI = hmotnos� v kg / (v��ka v m)2
V�stup napr.: �Vase BMI je 19.58�*/
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
