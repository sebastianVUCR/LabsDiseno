#pragma once
#include <vector>
using namespace std;

#include "Nodo.h"

/* REPRESENTA UN GRAFO COMPLEJO GEN�RICO */
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
