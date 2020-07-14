#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

#include "tipo.h"
#include "Enjambre.h"
#include "Criatura.h"
#include "Poro.h"
#include "Poltergeist.h"
#include "Pinguino.h"

int main()
{
	Criatura c0;
	cout << "Atributos de la criatura 0: " << endl;
	cout << "Especie: " << c0.obtEspecie() << endl;
	cout << "Edad: " << c0.obtEdad() << endl;
	cout << "Energia: " << c0.obtEnergia() << endl;

	cout << "-----------------------------------" << endl;

	Criatura c1(7, 4.5, new Poro());
	cout << "Atributos de la criatura 1: " << endl;
	cout << "Especie: " << c1.obtEspecie() << endl;
	cout << "Edad: " << c1.obtEdad() << endl;
	cout << "Energia: " << c1.obtEnergia() << endl;

	cout << "-----------------------------------" << endl;

	Criatura c2(1000, 49, new Poltergeist());
	cout << "Atributos de la criatura 2: " << endl;
	cout << "Especie: " << c2.obtEspecie() << endl;
	cout << "Edad: " << c2.obtEdad() << endl;
	cout << "Energia: " << c2.obtEnergia() << endl;

	cout << "-----------------------------------" << endl;

	Criatura c3(15, 500, new Pinguino());
	cout << "Atributos de la criatura 3: " << endl;
	cout << "Especie: " << c3.obtEspecie() << endl;
	cout << "Edad: " << c3.obtEdad() << endl;
	cout << "Energia: " << c3.obtEnergia() << endl;

	cout << "-----------------------------------" << endl;

	c1.combinarCriatura(&c2);
	c1.combinarCriatura(&c3);
	cout << "La criatura 1 se mezclo con la criatura 2 y 3" << endl;
	cout << "Creaturas por las que está compuesto: " << c1.obtVector() << endl;

	cout << "-----------------------------------" << endl;

	c1.cambiarEspecie(new Pinguino());
	c1.asgEdad(6);
	c1.asgEnergia(3.5);
	cout << "Atributos de la criatura 1 modificada: " << endl;
	cout << "Especie: " << c1.obtEspecie() << endl;
	cout << "Edad: " << c1.obtEdad() << endl;
	cout << "Energia: " << c1.obtEnergia() << endl;

	cout << "-----------------------------------" << endl;

	Criatura c4 = *(c0.reproducirse());
	cout << "Atributos del hijo de la criatura 1: " << endl;
	cout << "Especie: " << c1.obtEspecie() << endl;
	cout << "Edad: " << c1.obtEdad() << endl;
	cout << "Energia: " << c1.obtEnergia() << endl;

	cout << "-----------------------------------" << endl;

	Enjambre e0(&c0);
	cout << "Se creo un enjambre" << endl;
	cout << "Tipo: " << e0.getEspecie() << endl;
	cout << "Creaturas: " << e0.toString() << endl;

	e0.agregarCreatura(&c1);
	cout << endl << "Se agrego la creatura 1" << endl;
	cout << "Creaturas: " << e0.toString() << endl;

	e0.reproducirse();
	cout << endl << "Se reprodujeron las creaturas del enjambre" << endl;
	cout << "Creaturas: " << e0.toString() << endl;

	e0.reproducirse();
	cout << endl << "De nuevo" << endl;
	cout << "Creaturas: " << e0.toString() << endl;
}