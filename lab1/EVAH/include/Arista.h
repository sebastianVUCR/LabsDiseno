#ifndef ARISTA_H
#define ARISTA_H

#include "AristaD.h"
#include "AristaND.h"
#include "Uso.h"
#include "Dependencia.h"
#include "Asociacion.h"

class Nodo;
#include <string>

/* REPRESENTA UNA ARISTA GENÉRICA */
class Arista: public AristaD, public AristaND, public Uso, public Dependencia, public Asociacion
{
public: 
	Arista(Nodo*, Nodo*, int, int);
	virtual ~Arista();

	void dibujar();
	void cortar();
	void eliminar();
	void reducir();
	void copiar();

	std::string getNombre() { return nombre; }
	std::string setNombre(std::string nombre) { this->nombre = nombre; }
	std::string getTipo() { return tipo; }
	std::string setTipo(std::string tipo) { this->tipo = tipo; }
	std::string getpeso() { return peso; }
	std::string setPeso(std::string peso) { this->peso = peso; }
	std::string getDescripcion() { return descripcion; }
	std::string setDescripcion(std::string descripcion) { this->descripcion = descripcion; }
	std::pair<int, int> getMultiplicidad() { return multiplicidad; }
	std::pair<int, int> setMultiplicidad(std::pair<int, int> multiplicidad) { this->multiplicidad = multiplicidad; }
	std::pair<Nodo*, Nodo*> getNodos() { return nodos; }
	std::pair<Nodo*, Nodo*> setNodos(std::pair<Nodo*, Nodo*> nodos) { this->nodos = nodos; }

private:
	std::string nombre;
	std::string tipo;
	std::string peso;
	std::string descripcion;
	std::pair<int, int> multiplicidad;
	std::pair<Nodo*, Nodo*> nodos;
};

Arista::Arista(Nodo* inicio, Nodo* fin, int multiplicidad1, int multiplicidad2)
{

}

Arista::~Arista()
{

}

#endif // ARISTA_H
