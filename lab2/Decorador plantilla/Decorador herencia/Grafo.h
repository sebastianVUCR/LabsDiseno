#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "Nodo.h"
#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO COMPLEJO GENÉRICO */
template <class T>
class Grafo: TipoGrafo<T>
{
public:
	Grafo();
	Grafo(string nombre);
	virtual ~Grafo();

	string getNombre() { return nombre; }
	void setNombre(string nombre) { this->nombre = nombre; }

private:
	vector< Nodo > nodos;
	string nombre;
};

template <typename T>
Grafo<T>::Grafo() {
	cout << "Se creo un grafo\n";
}

template <typename T>
Grafo<T>::Grafo(string nombre) : nombre{ nombre }
{
	//cout << "Se creo el grafo " << nombre << " de tipo " << T.getTIPO() << endl;
}

template <typename T>
Grafo<T>::~Grafo()
{
	cout << "Se destruyo el grafo " << nombre << endl;
}
