#ifndef GRAPHML_SAVER_H
#define GRAPHML_SAVER_H

#include "Grafo.h"
#include "GrafoSaver.h"

/* REPRESENTA UN GUARDADOR BASADO EN GRAPHML DE GRAFO */
class GraphML_Saver : public GrafoSaver
{
public:
	GraphML_Saver(Grafo& g);
	virtual ~GraphML_Saver();
};

GraphML_Saver::GraphML_Saver(Grafo& g) : GrafoSaver(g)
{

}

GraphML_Saver::~GraphML_Saver()
{

}
#endif // GRAPHML_SAVER_H
