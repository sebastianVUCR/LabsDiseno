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


int main()
{
	Grafo<GrafoBasico> g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo<GrafoBasico> ed_basico(Grafo<GrafoBasico>("grafoBasico1"));
	EditorGrafo<GrafoUML> ed_uml(Grafo<GrafoUML >("grafoUML1"));
	EditorGrafo<GrafoBPMN> ed_bpmn(Grafo<GrafoBPMN >("grafoBPMN1"));

	Grafo<GrafoUML> pruebaGrafo = Grafo<GrafoUML>("prueba");

	std::cout << endl;


	AristaND<Agregacion> arista1 = AristaND<Agregacion>("aristaND1");
	arista1.dibujar();
	arista1.copiar();
	arista1.cortar();
	arista1.eliminar();
	arista1.reducir();
	std::cout << endl;

	AristaND<Contenido> arista2 = AristaND<Contenido>("aristaND2");
	arista2.dibujar();
	arista2.copiar();
	arista2.cortar();
	arista2.eliminar();
	arista2.reducir();
	std::cout << endl;

	Arista<AristaD, Uso> arista3 = Arista<AristaD, Uso>("arista1");
	arista3.dibujar();
	arista3.copiar();
	arista3.cortar();
	arista3.eliminar();
	arista3.reducir();
	std::cout << endl;

	Arista<AristaND<Agregacion>, Agregacion> arista4 = Arista<AristaND<Agregacion>, Agregacion>("arista2");
	arista4.dibujar();
	arista4.copiar();
	arista4.cortar();
	arista4.eliminar();
	arista4.reducir();
	std::cout << endl;

	AristaD arista5 = AristaD("aristaD1");
	arista5.dibujar();
	arista5.copiar();
	arista5.cortar();
	arista5.eliminar();
	arista5.reducir();
	std::cout << endl;
	
	return 0;
}
