#ifndef ND_UML_H
#define ND_UML_H

using namespace std

#include "Nodo.h"

/* REPRESENTA UN NODO UML DE GRAFOUML */
class ND_UML : public Nodo
{
public:
	ND_UML();
	ND_UML(string nombre, string tipo);
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

ND_UML::ND_UML() : Nodo()
{
	cout << "Se creo un ND_UML llamado " << nombre << endl;
}

ND_UML::ND_UML() : Nodo(string nombre,string tipo)
{
	cout << "Se creo un ND_UML llamado " << nombre << endl;
}


ND_UML::~ND_UML()
{
	cout << "Se elimino un Nodo UML llamado " << nombre << endl;
}

void ND_UML::dibujar() {
	cout << "Se dibujo " << nombre << endl;
}

void ND_UML::cortar() {
	cout << "Se corto " << nombre << endl;
}

void ND_UML::eliminar() {
	cout << "Se elimino " << nombre << endl;
}

void ND_UML::reducir() {
	cout << "Se redujo " << nombre << endl;
}

void ND_UML::copiar() {
	cout << "Se copio " << nombre << endl;
}

#endif // ND_UML_H
