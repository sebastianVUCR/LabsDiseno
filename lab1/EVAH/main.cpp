#include <iostream>
using namespace std;

#include "GrafoUML.h"
#include "GrafoBPMN.h"
#include "GrafoBasico.h"
#include "EditorGrafo.h"

#include"PaqueteUML.h"
#include"Seleccionador.h"
#include"Clase.h"
#include"Diagrama.h"
#include"Relacion.h"


int main()
{
	GrafoBasico g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo ed_basico(g_basico);
	EditorGrafo ed_uml(g_uml);
	EditorGrafo ed_bpmn(g_bpmn);


}
