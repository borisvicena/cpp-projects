/*Sila
Vytvorte program na v�po�et ve�kosti p�sobiacej sily na teleso, ak je z kl�vesnice zadan�
hmotnos� telesa a jeho zr�chlenie. Predpoklad�me p�sobenie sily v smere pohybu telesa*/
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
