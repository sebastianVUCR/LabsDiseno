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