#ifndef CSV_LOADER_H
#define CSV_LOADER_H

#include "GrafoLoader.h"
#include "GrafoUML.h"
#include <iostream>

/* REPRESENTA UN CARGADOR CSV DE GRAFO */
class CSV_Loader : public GrafoLoader
{
public:
	CSV_Loader();
	virtual GrafoUML Load(string nombreArchivo)
	{
		std::cout << "Cargando grafo" << std::endl;
		GrafoUML  retorno = GrafoUML();
		return retorno;
	}
	~CSV_Loader();
};

CSV_Loader::GrafoLoader()
{

}

CSV_Loader::~CSV_Loader()
{

}
#endif // CSV_LOADER_H
