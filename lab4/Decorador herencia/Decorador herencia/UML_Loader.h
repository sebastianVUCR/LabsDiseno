#pragma once

#include "GrafoLoader.h"
#include "GrafoUML.h"
#include <iostream>

class UML_Loader :public GrafoLoader
{
	public:
		UML_Loader() {}

		virtual GrafoUML Load(string nombreArchivo)
		{
			std::cout << "Cargando grafo" << std::endl;
			GrafoUML  retorno = GrafoUML();
			return retorno;
		}

		~UML_Loader() {}

	protected:

	private:

};

