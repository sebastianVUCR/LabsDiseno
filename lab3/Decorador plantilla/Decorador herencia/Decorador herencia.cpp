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

	AristaD arista1 = AristaD("aristaD1");
	arista1.dibujar();
	arista1.copiar();
	arista1.cortar();
	arista1.eliminar();
	arista1.reducir();
	std::cout << endl;

	AristaND arista2 = AristaND("aristaND1");
	arista2.dibujar();
	arista2.copiar();
	arista2.cortar();
	arista2.eliminar();
	arista2.reducir();
	std::cout << endl;

	Uso<AristaD> arista3 = Uso<AristaD>("Uso1");
	arista3.dibujar();
	arista3.copiar();
	arista3.cortar();
	arista3.eliminar();
	arista3.reducir();
	std::cout << endl;

	Dependencia<AristaND> arista4 = Dependencia<AristaND>("Dependencia1");
	arista4.dibujar();
	arista4.copiar();
	arista4.cortar();
	arista4.eliminar();
	arista4.reducir();
	std::cout << endl;

	Asociacion<AristaD> arista5 = Asociacion<AristaD>("Asociacion1");
	arista5.dibujar();
	arista5.copiar();
	arista5.cortar();
	arista5.eliminar();
	arista5.reducir();
	std::cout << endl;

	Contenido<AristaND> arista6 = Contenido<AristaND>("Contenido1");
	arista6.dibujar();
	arista6.copiar();
	arista6.cortar();
	arista6.eliminar();
	arista6.reducir();
	std::cout << endl;

	//Casos error
	//Agregacion<AristaD> aristaA = Agregacion<AristaD>();
	//Composicion<AristaD> aristaB = Composicion<AristaD>();
	//Contenido<AristaD> aristaC = Contenido<AristaD>();
	return 0;
}
