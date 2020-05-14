#ifndef GRAFOBASICO_H
#define GRAFOBASICO_H

#include "Grafo.h"
#include "TipoGrafo.h"

#include <string>

/* REPRESENTA UN GRAFO BÁSICO */
class GrafoBasico
{
public:
	GrafoBasico();
	~GrafoBasico();

	const static std::string getTIPO() { return "Basico"; }

};

GrafoBasico::GrafoBasico()
{

}

GrafoBasico::~GrafoBasico()
{

}
#endif // GRAFOBASICO_H
