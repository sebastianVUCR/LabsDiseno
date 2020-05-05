#pragma once
#include <vector>
using namespace std;

#include "Nodo.h"

/* REPRESENTA UN GRAFO COMPLEJO GENÉRICO */
class Grafo
{
public:
	Grafo();
	virtual ~Grafo();

private:
	vector< Nodo > nodos;
};

Grafo::Grafo()
{

}

Grafo::~Grafo()
{

}
