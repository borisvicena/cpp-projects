/*Zmaz_cast_1
Vytvorte program, ktor� vyma�e �ubovo�n� �as� re�azca. Program si najsk�r vy�iada
zadanie re�azca a n�sledne dve ��seln� hodnoty: poz�ciu, od ktorej m� za�a� maza�
a po�et znakov, ktor� m� zmaza�. Program potom vyp�e re�azec po zmazan� aj s jeho
aktu�lnou ve�kos�ou */
#include<iostream>
using namespace std;

int main()
 {
     string slovo;
     int odkial;
     int kolko;

     cout << "zadajte slovo: ";
     cin >> slovo;

     cout << "zadajte prve cislo: ";
     cin >> odkial;

     cout << "zadajte druhe cislo: ";
     cin >> kolko;

     slovo.erase(odkial - 1, kolko);

     cout << "slovo je: " << slovo << endl;

     return 0;
 }

