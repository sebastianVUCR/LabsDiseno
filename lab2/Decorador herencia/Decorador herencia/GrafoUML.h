#ifndef GRAFOUML_H
#define GRAFOUML_H

#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO NOTACIÓN UML */
class GrafoUML : public TipoGrafo
{
public:
	GrafoUML();
	~GrafoUML();
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
