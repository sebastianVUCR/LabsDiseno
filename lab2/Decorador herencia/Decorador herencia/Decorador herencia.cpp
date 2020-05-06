#include <iostream>
using namespace std;

#include "GrafoUML.h"
#include "GrafoBPMN.h"
#include "GrafoBasico.h"
#include "EditorGrafo.h"
#include "AristaND.h"

int main()
{
	GrafoBasico g_basico;
	GrafoUML g_uml;
	GrafoBPMN g_bpmn;

	EditorGrafo ed_basico(g_basico);
	EditorGrafo ed_uml(g_uml);
	EditorGrafo ed_bpmn(g_bpmn);

	AristaND arista1 = AristaND("arista1 no dirigida");
	arista1.dibujar();

	return 0;
}
