#include <iostream>
using namespace std;

#include "GrafoUML.h"
#include "GrafoBPMN.h"
#include "GrafoBasico.h"
#include "EditorGrafo.h"

#include "AristaND.h"
#include "AristaD.h"

#include "Uso.h"
#include "Dependencia.h"
#include "Asociacion.h"

#include "Agregacion.h"
#include "Composicion.h"
#include "Contenido.h"


int main()
{
	GrafoBasico g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo ed_basico(g_basico);
	EditorGrafo ed_uml(g_uml);
	EditorGrafo ed_bpmn(g_bpmn);

	
	AristaND arista1 = AristaND("arista1");
	arista1.dibujar();
	cout << endl;
	Uso arista1Uso = Uso(arista1);
	arista1Uso.dibujar();

	AristaD arista2 = AristaD("arista2");
	arista2.cortar();
	cout << endl;
	Uso arista2Uso = Uso(arista2);
	arista2Uso.cortar();

	Contenido arista3Contenido = Contenido("arista3");
	arista3Contenido.eliminar();
	arista3Contenido.copiar();

	Agregacion arista4Agregacion = Agregacion("arista4");
	arista4Agregacion.dibujar();
	arista4Agregacion.copiar();

	Composicion arista5Composicion = Composicion("arista5");
	arista5Composicion.eliminar();
	arista5Composicion.reducir();






	return 0;
}
