/*Kladne_1a
Vytvorte program, ktor� zist�, �i cel� ��slo zadan� z kl�vesnice je kladn�. Ak bude zadan�
kladn� ��slo, tak program vyp�e �Zadali ste kladne cislo�. Ak bude zadan� 0 alebo
z�porn� ��slo, tak program ni� nevyp�e.*/
#include<iostream>
using namespace std;

int main()
{
    int cislo;

    cout << "Zadajte cislo: ";
    cin >> cislo;

    if(cislo>0)
    {
        cout << "Zadali ste kladne cislo.";
    }
    return 0;
}
