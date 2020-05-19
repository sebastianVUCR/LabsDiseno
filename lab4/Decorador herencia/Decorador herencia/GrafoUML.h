#ifndef GRAFOUML_H
#define GRAFOUML_H

#include "TipoGrafo.h"
#include <vector>

class Arista;
class Nodo;

/* REPRESENTA UN GRAFO NOTACIÓN UML */
class GrafoUML : public TipoGrafo
{
public:
	GrafoUML();
	void imprimir();
	void insertarNodo(Nodo* nodo) { nodos.insert(nodos.end(), nodo); }
	void insertarArista(Arista* arista) { aristas.insert(aristas.end(), arista); }
	~GrafoUML();
private:
	const string TIPO = "UML";
	vector<Arista*> aristas;
	vector<Nodo*> nodos;

};

GrafoUML::GrafoUML()
{
	cout << "Se creo un GrafoUML\n";
}

void GrafoUML::imprimir()
{
	cout << "Imprimiendo Grafo\n";
}

GrafoUML::~GrafoUML()
{
	cout << "Se destruyo un GrafoUML\n";
}
#endif // GRAFOUML_H
