#include <iostream>

using namespace std;


class Car
{
	public:
		int rokVyroby;
		string nazov;
		bool automaticTransmission;

		Car(int rokVyroby, string nazov, bool automaticTransmission)
		{
			this->rokVyroby = rokVyroby;
			this->nazov = nazov;
			this->automaticTransmission = automaticTransmission;
		}

		Car(int rokVyroby, string nazov)
		{
			this->rokVyroby = rokVyroby;
			this->nazov = nazov;
		}

		Car()
		{

		}
};

class Obdlznik
{
public:
	float sirka;
	float dlzka;

	Obdlznik(float sirka, float dlzka)
	{
		this->sirka = sirka;
		this->dlzka = dlzka;
	}

	Obdlznik(float sirka)
	{
		this->sirka = sirka;
	}

	//Vypocet obsahu s dvoma parametrami
	float  VypocitajObsah(float sirka, float dlzka)
	{
		this->sirka = sirka;
		this->dlzka = dlzka;
		float vypocet;
		vypocet = this->sirka * this->dlzka;
		return vypocet;
	}

	//Vypocet obsahu bez parametrov
	float VypocitajObsahBezParametrov()
	{
		sirka = this->sirka;
		dlzka = this->dlzka;

		return sirka * dlzka;
	}

	//Vypocet obvodu s dvoma parametrami
	float VypocitajObvod(float sirka, float dlzka)
	{
		this->sirka = sirka;
		this->dlzka = dlzka;
		float vypocet;
		vypocet = (2 * this->sirka) + (2 * this->dlzka);
		return vypocet;
	}

	float VypocitajObvodBezParametrov()
	{
		sirka = this->sirka;
		dlzka = this->dlzka;

		return (2 * sirka) + (2 * dlzkax);
	}
};

int main()
{
	//Trieda Obdlznik
	Obdlznik ob1(5.6, 2.3);
	Obdlznik ob2(7.7);

	cout << "Obdlznik ob1 ma sirku " << ob1.sirka << " a dlzku " << ob1.dlzka << endl;
	cout << "Obdlznik ob2 ma sirku " << ob2.sirka << endl;

	//cout << "Obdzlnik ob1 ma obsah " << ob1.VypocitajObsah(10.5, 20) << endl;
	cout << "Obdlznik ob1 ma obsah " << ob1.VypocitajObsahBezParametrov() << endl;
	//cout << "Obdlznik ob1 ma obvod " << ob1.VypocitajObvod(10, 5) << endl;
	cout << "Obdlznik ob1 ma obvod " << ob1.VypocitajObvodBezParametrov() << endl;


	cout << endl << endl;
	//Tried Car
	Car bmw(1990, "M5", false);
	Car Volkswagen(2005, "Fabia");
	Car MiniCooper;

	cout << "Auto bolo vyrobene v roku: " << bmw.rokVyroby << endl;
	cout << "Nazov auta je: " << bmw.nazov << endl;

	if (bmw.automaticTransmission)
	{
		cout << "Auto ma automaticku prevodovku!" << endl;
	}
	else
	{
		cout << "Auto nema automaticku prevodovku!" << endl;
	}

	cout << endl;

	Car tesla(2020, "Cybertruck", true);

	cout << "Auto bolo vyrobene v roku: " << tesla.rokVyroby << endl;
	cout << "Nazov auta je: " << tesla.nazov << endl;

	if (tesla.automaticTransmission)
	{
		cout << "Auto ma automaticku prevodovku!" << endl;
	}
	else
	{
		cout << "Auto nema automaticku prevodovku!" << endl;
	}

}