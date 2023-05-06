/*Vypis_1
Vytvorte program, ktorı na prvom riadku vypíše text "Programujeme v jazyku C++", na
druhom riadku "Toto, je program v jazyku C++", na treom riadku vypíše èíselnı literál
"598". Riešte rôznym spôsobom: jednım príkazom, dvoma príkazmi a pod.*/
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
