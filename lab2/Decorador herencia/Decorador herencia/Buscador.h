#ifndef BUSCADOR_H
#define BUSCADOR_H

#include "Filtro.h"

/* REPRESENTA UN OBJETO QUE RESUELVE BÚSQUEDAS SOBRE UN GRAFO COMPLEJO */
class Buscador
{
public:
	Buscador();
	~Buscador();

private:
	Filtro f;
};

Buscador::Buscador()
{

}

Buscador::~Buscador()
{

}
#endif // BUSCADOR_H
