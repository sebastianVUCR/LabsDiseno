#pragma once

#include "GrafoLoader.h"
#include "ND_UML.h"
#include "GrafoUML.h"
#include <fstream>
#include <iostream>

class XML_Loader : public GrafoLoader
{
	public:
		XML_Loader() {}

		virtual GrafoUML Load(string nombreArchivo)
		{

			GrafoUML retorno = GrafoUML();
			ifstream doc(nombreArchivo);
			char cadena[128];
			for(int x = 0; x < 4; ++x){doc >> cadena;}
			while (!doc.eof()) {
				int x = 1;
				doc >> cadena;
				if(cadena[x] == 'N'){
					doc >> cadena;
					string t = "";
					x = 8;
					while (cadena[x] != '<')
						t = t + cadena[x++];
					cadena[x] = '\0';
					doc >> cadena;
					doc >> cadena;
					ND_UML nodo(t);
					retorno.insertarNodo(&nodo);
				}
				else if (cadena[x] == 'A') {
					doc >> cadena;
					string t = "";
					x = 8;
					while (cadena[x] != '<')
						t = t + cadena[x++];
					cadena[x] = '\0';
					doc >> cadena;
					Arista* arista;
					if (cadena[12] == 'N')
						arista = new AristaND("Arista desde XML");
					else
						arista = new AristaD("Arista desde XML");

					t = "";
					x = 6;
					doc >> cadena;
					while (cadena[x] != '<')
						t = t + cadena[x++];
					cadena[x] = '\0';
					arista->setPeso(t);

					t = "";
					x = 13;
					doc >> cadena;
					while (cadena[x] != '<')
						t = t + cadena[x++];
					cadena[x] = '\0';
					arista->setDescripcion(t);

					x = 15;
					doc >> cadena;
					pair<int, int> par;
					par.first = (int)(cadena[x]);
					par.second = (int)(cadena[x + 2]);
					arista->setMultiplicidad(par);
					doc >> cadena;
					doc >> cadena;
					retorno.insertarArista(arista);
				}
			}
			doc.close();
			return retorno;
		}

		~XML_Loader() {}

	protected:

	private:


};

