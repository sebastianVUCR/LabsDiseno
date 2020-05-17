#pragma once

#include "GrafoLoader.h"
#include "GrafoUML.h"
#include <fstream>
#include <iostream>

class XML_Loader : public GrafoLoader
{
	public:
		XML_Loader() {}

		virtual GrafoUML Load(string nombreArchivo)
		{

			GrafoUML  retorno = GrafoUML();
			return retorno;
		}

		~XML_Loader() {}

	protected:

	private:


};

