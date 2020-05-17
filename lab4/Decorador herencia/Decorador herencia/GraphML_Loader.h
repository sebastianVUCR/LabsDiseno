#ifndef GRAPHML_LOADER_H
#define GRAPHML_LOADER_H

#include "GrafoLoader.h"
#include "GrafoUML.h"
#include <iostream>
#include <fstream>

/* REPRESENTA UN CARGADOR BASADO EN GRAPHML DE GRAFO */
class GraphML_Loader : public GrafoLoader
{
public:
	GraphML_Loader();
	virtual GrafoUML Load(string nombreArchivo)
	{
		std::cout << "Cargando grafo" << std::endl;
		GrafoUML  retorno = GrafoUML();
		return retorno;
	}
	virtual ~GraphML_Loader();
};

GraphML_Loader::GraphML_Loader()
{

}

GraphML_Loader::~GraphML_Loader()
{

}
#endif // GRAPHML_LOADER_H
