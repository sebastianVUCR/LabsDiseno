#ifndef GRAFOSAVER_H
#define GRAFOSAVER_H

#include "Grafo.h" 

/* REPRESENTA UN GUARDADOR GENÉRICO DE GRAFO */
class GrafoSaver
{
public:
	GrafoSaver(Grafo& gn);
	virtual ~GrafoSaver();

private:
	Grafo& g;
};

GrafoSaver::GrafoSaver(Grafo& gn) : g(gn)
{

}

GrafoSaver::~GrafoSaver()
{

}
#endif // GRAFOSAVER_H
