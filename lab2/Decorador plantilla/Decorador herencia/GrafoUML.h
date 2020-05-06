#ifndef GRAFOUML_H
#define GRAFOUML_H

#include <string>

#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO NOTACIÓN UML */
class GrafoUML
{
public:
	GrafoUML();
	~GrafoUML();

	const string getTIPO() { return TIPO; }

private:
	const string TIPO = "UML";
};

GrafoUML::GrafoUML()
{
	cout << "Se creo un GrafoUML\n";
}

GrafoUML::~GrafoUML()
{
	cout << "Se destruyo un GrafoUML\n";
}
#endif // GRAFOUML_H
