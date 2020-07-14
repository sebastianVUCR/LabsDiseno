#pragma once

#include <unordered_map>
#include <memory>
#include <utility>
#include <vector>
#include <string>
using namespace std;

#include "Valor.h"
#include "Entero.h"
#include "Doble.h"
#include "Especie.h"
#include "Vector.h"
#include "Poro.h"


class Criatura
{
public:
	Criatura();
	Criatura(int edad, double energia, Especie* especie);
	~Criatura();

	static string nombre();

	/* OBTENEDORES CONVENCIONALES */
	int obtEdad() const;
	double obtEnergia() const;
	string obtEspecie() const;
	string obtVector() const;
	string toString();

	/* ASIGNADORES CONVENCIONALES */
	void asgEdad(int ne);
	void asgEnergia(double ne);
	void combinarCriatura(Criatura* criaturas);
	void cambiarEspecie(Especie* especie);

	/* VECTOR DE ATRIBUTOS */
	void obtAtributos(vector< pair< string, Valor* > >& vectorValores);

	/* Acciones */
	Criatura* reproducirse();

private:
	typedef unordered_map< string, Valor* > t_map_atributos;
	typedef unordered_map< string, Valor* >::const_iterator t_atributos_const_iterador;

	t_map_atributos atributos;
	vector< Valor* > vectorValores;
	Especie* especie;
};

// inicializa atributos con la cantidad exacta requerida de cubetas, una por cada atributo
Criatura::Criatura() : atributos(3)
{
	Entero* vedad_p = new Entero(0);
	Doble* venergia_p = new Doble(5.5);
	especie = new Poro();
	atributos["edad"] = vedad_p;
	atributos["energia"] = venergia_p;
	atributos["vector"] = new Vector<Criatura>();
}

// inicializa atributos con la cantidad exacta requerida de cubetas, una por cada atributo
Criatura::Criatura(int edad, double energia, Especie* especie) : atributos(2)
{
	Entero* vedad_p = new Entero(edad);
	Doble* venergia_p = new Doble(energia);
	this->especie = especie;
	atributos["edad"] = vedad_p;
	atributos["energia"] = venergia_p;
	atributos["vector"] = new Vector<Criatura>();
}

Criatura::~Criatura()
{ // se debe liberar la memoria de todos los atributos, de lo contrario queda una fuga
	for (auto a : atributos)
		a.second->~Valor(); // enlace dinámico de destructores!!!
}

string Criatura::nombre()
{
	return "Criatura";
}

int Criatura::obtEdad() const
{
	return static_cast< Entero* >(atributos.at("edad"))->obt();
}

double Criatura::obtEnergia() const
{
	return static_cast< Doble* >(atributos.at("energia"))->obt();
}

string Criatura::obtEspecie() const {
	return especie->getTipo();
}

string Criatura::obtVector() const {
	return static_cast<Vector<Criatura>*>(atributos.at("vector"))->toString();
}

string Criatura::toString(){
	string hilera = "(" + obtEspecie() + ")";
	return hilera;
}

void Criatura::asgEdad(int ne)
{
	static_cast<Entero*>(atributos.at("edad"))->asg(ne);
}

void Criatura::asgEnergia(double ne)
{
	static_cast<Doble*>(atributos.at("energia"))->asg(ne);
}

void Criatura::cambiarEspecie(Especie* especie) {
	this->especie = especie;
}

void Criatura::obtAtributos(vector< pair< string, Valor* > >& vectorValores)
{
	int tamanyo = atributos.size();
	vectorValores.resize(tamanyo);
	int j = 0;
	for (auto i : atributos)
	{
		vectorValores[j] = i;
		j++;
	}
}

Criatura* Criatura::reproducirse() {

	return new Criatura(obtEdad(), obtEnergia(), especie->reproducirse());
}

void Criatura::combinarCriatura(Criatura* criatura) {
	static_cast<Vector<Criatura>*>(atributos["vector"])->agregarElem(*criatura);
}