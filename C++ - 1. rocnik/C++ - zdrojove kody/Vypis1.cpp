/*Vypis_1
Vytvorte program, ktor� na prvom riadku vyp�e text "Programujeme v jazyku C++", na
druhom riadku "Toto, je program v jazyku C++", na tre�om riadku vyp�e ��seln� liter�l
"598". Rie�te r�znym sp�sobom: jedn�m pr�kazom, dvoma pr�kazmi a pod.*/
#include<iostream>
using namespace std;

int main()
{
    cout << "Programujeme v jazyku C++" << endl;
    cout << "Toto, je program v jazyku C++" << endl;
    cout << 598 << endl;

    cout << "Programujeme v jazyku C++\nToto, je program v jazyku C++\n598" << endl;

    return 0;
}
