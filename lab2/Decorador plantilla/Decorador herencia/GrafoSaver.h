#ifndef GRAFOSAVER_H
#define GRAFOSAVER_H

#include "Grafo.h" 

#include <string>

/* REPRESENTA UN GUARDADOR GENÉRICO DE GRAFO */
class GrafoSaver
{
public:
	GrafoSaver();
	virtual ~GrafoSaver();
	static const std::string getTIPO() { return "Saver"; }
};

GrafoSaver::GrafoSaver()
{

}

GrafoSaver::~GrafoSaver()
{

}
#endif // GRAFOSAVER_H
