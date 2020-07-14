#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

#include "tipo.h"
#include "Criatura.h"
#include "Poro.h"
#include "Poltergeist.h"

int main()
{
	Criatura c0;
	cout << "atributos de la criatura 0: " << endl;
	cout << c0.obtEdad() << endl;
	cout << c0.obtEnergia() << endl;

	Criatura c1(7, 4.5, new Poro());
	cout << "atributos de la criatura 1: " << endl;
	cout << c1.obtEdad() << endl;
	cout << c1.obtEnergia() << endl;

	Criatura c2(1000, 9, new Poltergeist());
	c1.combinarCriatura(&c2);

	cout << c1.obtVector() << endl;

	c1.asgEdad(6);
	c1.asgEnergia(3.5);
	cout << "atributos de la criatura 1 modificada: " << endl;
	cout << c1.obtEdad() << endl;
	cout << c1.obtEnergia() << endl;


	//system("pause");
}