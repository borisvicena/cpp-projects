/*Zmaz_cast_1
Vytvorte program, ktorı vymae ¾ubovo¾nú èas reazca. Program si najskôr vyiada
zadanie reazca a následne dve èíselné hodnoty: pozíciu, od ktorej má zaèa maza
a poèet znakov, ktoré má zmaza. Program potom vypíše reazec po zmazaní aj s jeho
aktuálnou ve¾kosou */
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

