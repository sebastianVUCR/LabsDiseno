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


#include"ConstructorAbstracto.h"
#include "ConstructorXML.h"
#include "ConstructorJSON.h"
#include "NodoUML.h"
#include "ClaseUML.h"


int main()
{
	GrafoBasico g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo ed_basico(g_basico);
	EditorGrafo ed_uml(g_uml);
	EditorGrafo ed_bpmn(g_bpmn);

	ConstructorXML xml = ConstructorXML();
	ConstructorJSON json = ConstructorJSON();

	/*
	Grafo pruebaGrafo = Grafo("prueba");

	cout << endl;

	
	AristaND arista1 = AristaND("arista1");
	arista1.dibujar();
	cout << endl;
	arista1.copiar();
	cout << endl;
	arista1.cortar();
	cout << endl;
	arista1.eliminar();
	cout << endl;
	arista1.reducir();
	cout << endl;

	cout << endl;
	Uso arista1Uso = Uso(arista1);
	arista1Uso.dibujar();
	arista1Uso.copiar();
	arista1Uso.cortar();
	arista1Uso.eliminar();
	arista1Uso.reducir();

	AristaD arista2 = AristaD("arista2");
	arista2.cortar();
	cout << endl;
	Uso arista2Uso = Uso(arista2);
	arista2Uso.cortar();
	cout << endl;
	Contenido arista3Contenido = Contenido("arista3");
	arista3Contenido.eliminar();
	arista3Contenido.copiar();
	arista3Contenido.dibujar();
	arista3Contenido.reducir();
	arista3Contenido.cortar();

	cout << endl;
	Agregacion arista4Agregacion = Agregacion("arista4");
	arista4Agregacion.eliminar();
	arista4Agregacion.copiar();
	arista4Agregacion.dibujar();
	arista4Agregacion.reducir();
	arista4Agregacion.cortar();


	cout << endl;
	Composicion arista5Composicion = Composicion("arista5");
	arista5Composicion.eliminar();
	arista5Composicion.copiar();
	arista5Composicion.dibujar();
	arista5Composicion.reducir();
	arista5Composicion.cortar();

	cout << endl;
	AristaD tmpArista6 = AristaD("arista6");
	Asociacion arista6Asosiacion = Asociacion(tmpArista6);
	arista6Asosiacion.dibujar();
	arista6Asosiacion.copiar();
	arista6Asosiacion.cortar();
	arista6Asosiacion.eliminar();
	arista6Asosiacion.reducir();

	cout << endl;

	//AristaD tmpArista7 = AristaD("arista7");
	//Dependencia arista7Dependencia = Dependencia(tmpArista7);

	Dependencia arista7Dependencia = Dependencia(*(new AristaND("arista7")));
	arista7Dependencia.dibujar();
	arista7Dependencia.copiar();
	arista7Dependencia.cortar();
	arista7Dependencia.eliminar();
	arista7Dependencia.reducir();


	AristaD arista8 = AristaD("A");
	arista8.dibujar();
	cout << endl;
	arista8.copiar();
	cout << endl;
	arista8.cortar();
	cout << endl;
	arista8.eliminar();
	cout << endl;
	arista8.reducir();
	cout << endl;

	*/

	return 0;
}
