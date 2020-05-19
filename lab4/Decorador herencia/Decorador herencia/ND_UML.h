#ifndef ND_UML_H
#define ND_UML_H

using namespace std;

#include "Nodo.h"

/* REPRESENTA UN NODO UML DE GRAFOUML */
class ND_UML : public Nodo
{
public:
	ND_UML();
	ND_UML(string nombre);
	~ND_UML();

	void dibujar();
	void cortar();
	void eliminar();
	void reducir();
	void copiar();

	const string getTIPO() { return TIPO; }

private:
	const string TIPO = "UML";
};

ND_UML::ND_UML()
{
	cout << "Se creo un ND_UML llamado " << getNombre() << endl;
}

ND_UML::ND_UML(string nombre)
{
	setNombre(nombre);
	cout << "Se creo un ND_UML llamado " << getNombre() << endl;
}


ND_UML::~ND_UML()
{
	cout << "Se elimino un Nodo UML llamado " << getNombre() << endl;
}

void ND_UML::dibujar() {
	cout << "Se dibujo " << getNombre() << endl;
}

void ND_UML::cortar() {
	cout << "Se corto " << getNombre() << endl;
}

void ND_UML::eliminar() {
	cout << "Se elimino " << getNombre() << endl;
}

void ND_UML::reducir() {
	cout << "Se redujo " << getNombre() << endl;
}

void ND_UML::copiar() {
	cout << "Se copio " << getNombre() << endl;
}

#endif // ND_UML_H
