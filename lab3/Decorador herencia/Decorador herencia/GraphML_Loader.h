#ifndef GRAPHML_LOADER_H
#define GRAPHML_LOADER_H

#include "GrafoLoader.h"

/* REPRESENTA UN CARGADOR BASADO EN GRAPHML DE GRAFO */
class GraphML_Loader : public GrafoLoader
{
public:
	GraphML_Loader();
	virtual ~GraphML_Loader();
};

GraphML_Loader::GraphML_Loader()
{

}

GraphML_Loader::~GraphML_Loader()
{

}
#endif // GRAPHML_LOADER_H
