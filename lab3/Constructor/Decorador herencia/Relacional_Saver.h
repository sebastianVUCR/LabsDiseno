#ifndef RELACIONAL_SAVER_H
#define RELACIONAL_SAVER_H

#include "Grafo.h"
#include "GrafoSaver.h"

/* REPRESENTA UN GUARDADOR RELACIONAL DE GRAFO */
class Relacional_Saver : public GrafoSaver
{
public:
	Relacional_Saver(Grafo g);
	virtual ~Relacional_Saver();
};

Relacional_Saver::Relacional_Saver(Grafo g) : GrafoSaver(g)
{

}

Relacional_Saver::~Relacional_Saver()
{

}
#endif // RELACIONAL_SAVER_H
