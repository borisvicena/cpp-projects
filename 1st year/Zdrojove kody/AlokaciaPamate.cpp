//Prog0010 - Alokacia pamate pomocou operatora new

#include <iostream>
using namespace std;

int main()
{

    int * pVek = new int;	//operator new vrati adresu prveho bajtu
							//zo styroch, ktore alokoval vo volnom ulozisti
    cin >> *pVek;

    cout << "Hodnota, na ktoru ukazuje ukazovatel pVek je: " << *pVek << '\n';
    cout << "Adresa, ktora je zapisana v ukazovateli pVek je: " << pVek << '\n';
    cout << "Adresa samotneho ukazovatela pVek je: " << &pVek << endl;

    delete pVek; //uvolni alokovanu pamat

    pVek = 0;    //nastavi ukazovatel na nulu

    return 0;

}
