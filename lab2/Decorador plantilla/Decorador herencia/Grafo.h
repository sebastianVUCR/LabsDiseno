#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "Nodo.h"
#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO COMPLEJO GENÉRICO */
class Grafo
{
public:
	Grafo();
	Grafo(string nombre);
	virtual ~Grafo();

	string getNombre() { return nombre; }
	void setNombre(string nombre) { this->nombre = nombre; }
	TipoGrafo* getTipo() { return &tipo; }

private:
	vector< Nodo > nodos;
	string nombre;
	TipoGrafo tipo;

};

Grafo::Grafo() {
	cout << "Se creo un grafo\n";
}

Grafo::Grafo(string nombre): nombre{nombre}
{
	cout << "Se creo el grafo " << nombre << endl;
}

Grafo::~Grafo()
{
	cout << "Se destruyo el grafo " << nombre << endl;
}
