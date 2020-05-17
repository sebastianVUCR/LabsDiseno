#ifndef RELACIONAL_LOADER_H
#define RELACIONAL_LOADER_H

#include "GrafoLoader.h"
#include "GrafoUML.h"
#include <iostream>

/* REPRESENTA UN CARGADOR RELACIONAL DE GRAFO */
class Relacional_Loader : public GrafoLoader
{
public:
	Relacional_Loader();
	virtual GrafoUML Load(string nombreArchivo)
	{
		std::cout << "Cargando grafo" << std::endl;
		GrafoUML  retorno = GrafoUML();
		return retorno;
	}
	~Relacional_Loader();
};

Relacional_Loader::Relacional_Loader()
{

}

Relacional_Loader::~Relacional_Loader()
{

}
#endif // RELACIONAL_LOADER_H
