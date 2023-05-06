#include<iostream>
using namespace std;

int main()
{
    double celzius;
    cout << "Zadajte stupne Celzia: ";
    cin >> celzius;

    double fahrenheit;
    fahrenheit = 1.8 * celzius + 32;

    cout << celzius << " Stupnov Celzia " << " je " << fahrenheit << " Stupnov Fahrenheitov .";
    return 0;
}
