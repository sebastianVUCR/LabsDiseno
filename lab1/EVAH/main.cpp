#include <iostream>
using namespace std;

#include "GrafoUML.h"
#include "GrafoBPMN.h"
#include "GrafoBasico.h"
#include "EditorGrafo.h"

#include"ObjetoGenericoUML.h"
#include"Seleccionador.h"
#include"Clase.h"
#include"Diagrama.h"
#include"Relacion.h"
#include"PaqueteUML.h"


int main()
{
	GrafoBasico g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo ed_basico(g_basico);
	EditorGrafo ed_uml(g_uml);
	EditorGrafo ed_bpmn(g_bpmn);



	//prueba clase y relacion

	Clase clase = Clase(" 1 ");
	clase.dibujar();
	clase.reducir();
	clase.cortar();
	clase.eliminar();
	clase.pegar();

	Clase clase2 = Clase(" 2 ");

	clase.crearRelacion(&clase2,1,5);
	clase.borrarRelacion(&clase2);

	Relacion relacion = Relacion(&clase,&clase2,1,5);

	clase.conectar(&relacion);

	//prueba diagrama

	cout<<endl;

    Diagrama diagrama = Diagrama(" 1 ");
	diagrama.dibujar();
	diagrama.reducir();
	diagrama.cortar();

    diagrama.conectar(&clase);


	//prueba paquete

    PaqueteUML paquete = PaqueteUML(" 1 ");
    paquete.conectar(&diagrama);


}
/**
anotaciones para Kevin: quite una clase en los parametros de los metodos de clase
porque lo que se ocupan son los nombre y ya se sabe uno porque es el de la clase que lo llama


Puse para que los constructores se heredaran entonces hay que cambiar el diagrama

quite el metodo conectar de obj generico porque no se puede heredar con diferentes parametros

**/
