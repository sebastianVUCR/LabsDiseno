#ifndef NEO4J_LOADER_H
#define NEO4J_LOADER_H

#include "GrafoLoader.h"
#include "GrafoUML.h"
#include <iostream>

/* REPRESENTA UN CARGADOR BASADO EN Neo4J DE GRAFO */
class Neo4J_Loader : public GrafoLoader
{
public:
	Neo4J_Loader();
	virtual GrafoUML Load(string nombreArchivo)
	{
		std::cout << "Cargando grafo" << std::endl;
		GrafoUML  retorno = GrafoUML();
		return retorno;
	}
	~Neo4J_Loader();
};

Neo4J_Loader::Neo4J_Loader()
{

}

Neo4J_Loader::~Neo4J_Loader()
{

}

#endif // NEO4J_LOADER_H
