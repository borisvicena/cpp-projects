/*Sila
Vytvorte program na vıpoèet ve¾kosti pôsobiacej sily na teleso, ak je z klávesnice zadaná
hmotnos telesa a jeho zrıchlenie. Predpokladáme pôsobenie sily v smere pohybu telesa*/
#include<iostream>
using namespace std;

int main()
{
    int hmotnostTelesa;
    cout << "Zadajte Hmotnost Telesa = ";
    cin >> hmotnostTelesa;

    int zrychlenieTelesa;
    cout << "Zadajte zrychlenie Telesa = ";
    cin >> zrychlenieTelesa;

    int sila;
    sila = hmotnostTelesa * zrychlenieTelesa;
    cout << "Posobiaca sila na teleso je ";
    cin >> sila;

    return 0;
}
