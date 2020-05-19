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

#include"GrafoLoader.h"
#include "XML_Loader.h"


int main()
{

	GrafoLoader* loader = new XML_Loader();
	GrafoUML salida = loader->Load("prueba.xml");
	salida.imprimir();
	return 0;
}
