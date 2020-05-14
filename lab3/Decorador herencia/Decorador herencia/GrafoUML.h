#ifndef GRAFOUML_H
#define GRAFOUML_H

#include "TipoGrafo.h"

/* REPRESENTA UN GRAFO NOTACI�N UML */
class GrafoUML : public TipoGrafo
{
public:
	GrafoUML();
	~GrafoUML();
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