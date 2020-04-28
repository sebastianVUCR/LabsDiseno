#include <iostream>
using namespace std;

/*#include "GrafoUML.h"
#include "GrafoBPMN.h"
#include "GrafoBasico.h"
#include "EditorGrafo.h"

#include "ObjetoGenericoUML.h"
#include "Seleccionador.h"
#include "Clase.h"
#include "Diagrama.h"
#include "Relacion.h"
#include "PaqueteUML.h"*/

#include "include/GrafoUML.h"
#include "include/GrafoBPMN.h"
#include "include/GrafoBasico.h"
#include "include/EditorGrafo.h"

#include "include/ObjetoGenericoUML.h"
#include "include/Seleccionador.h"
#include "include/Clase.h"
#include "include/Diagrama.h"
#include "include/Relacion.h"
#include "include/PaqueteUML.h"


int main()
{

	GrafoBasico g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo ed_basico(g_basico);
	EditorGrafo ed_uml(g_uml);
	EditorGrafo ed_bpmn(g_bpmn);



	//prueba clase y relacion

	Clase clase = Clase("Clase1");
	clase.dibujar();
	clase.reducir();
	clase.cortar();
	clase.eliminar();
	clase.pegar();

	Clase clase2 = Clase("Clase2");


	clase.crearRelacion(&clase2,1,5);
	clase.borrarRelacion(&clase2);

	Relacion relacion = Relacion(&clase,&clase2,1,5);

	//clase.conectar<Relacion>(&relacion);

	//prueba diagrama

	cout<<endl;

    Diagrama diagrama = Diagrama("1");
	diagrama.dibujar();
	diagrama.reducir();
	diagrama.cortar();

    //diagrama.conectar<Clase>(&clase);


	//prueba paquete

    PaqueteUML paquete = PaqueteUML("1");
    //paquete.conectar<Diagrama>(&diagrama);

}
