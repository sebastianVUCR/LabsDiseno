#include <iostream>
using namespace std;

#include "GrafoUML.h"
#include "GrafoBPMN.h"
#include "GrafoBasico.h"
#include "EditorGrafo.h"

#include"Grafo.h"

#include "AristaND.h"
#include "AristaD.h"

#include "Uso.h"
#include "Dependencia.h"
#include "Asociacion.h"

#include "Agregacion.h"
#include "Composicion.h"
#include "Contenido.h"


#include "ConstructorAbstracto.h"
#include "ConstructorXML.h"
#include "ConstructorJSON.h"
#include "NodoUML.h"
#include "ClaseUML.h"
#include "Valor.h"
#include "Entero.h"
#include "Doble.h"
#include "NodoUML.h"


int main()
{
	GrafoUML g_uml;

	ConstructorAbstracto* xml = new ConstructorXML();
	xml->inicioObjeto("Grafo1");
	ConstructorAbstracto* json = new ConstructorJSON();
	json->inicioObjeto("Grafo1");

	Grafo pruebaGrafo = Grafo("prueba");

	AristaND arista1 = AristaND("arista1");
	xml->serializarInfoArista(&arista1);
	json->serializarInfoArista(&arista1);
	AristaD arista2 = AristaD("arista2");
	NodoUML nodo1("nodo1", 1);
	NodoUML nodo2("nodo2", 2);
	xml->serializarInfoNodo(&nodo1);
	xml->serializarInfoNodo(&nodo2);
	xml->serializarInfoArista(&arista2);
	xml->finObjeto();
	json->serializarInfoNodo(&nodo1);
	json->serializarInfoNodo(&nodo2);
	json->serializarInfoArista(&arista2);
	json->finObjeto();
	std::cout << xml->obtenerSalida();
	std::cout << json->obtenerSalida();
	return 0;
}
