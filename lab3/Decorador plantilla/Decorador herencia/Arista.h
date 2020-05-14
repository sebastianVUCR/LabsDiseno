#ifndef ARISTA_H
#define ARISTA_H

#include <string>

/* REPRESENTA UNA ARISTA GENÉRICA */
class Arista
{
public: 
	Arista();
	Arista(string nombre);
	~Arista();

	virtual void dibujar() = 0;
	virtual void cortar() = 0;
	virtual void eliminar() = 0;
	virtual void reducir() = 0;
	virtual void copiar() = 0;

	std::string getNombre() { return nombre; }
	void setNombre(std::string nombre) { this->nombre = nombre; }
	std::string getTipo() { return tipo; }
	void setTipo(std::string tipo) { this->tipo = tipo; }
	std::string getpeso() { return peso; }
	void setPeso(std::string peso) { this->peso = peso; }
	std::string getDescripcion() { return descripcion; }
	void setDescripcion(std::string descripcion) { this->descripcion = descripcion; }
	std::pair<int, int> getMultiplicidad() { return multiplicidad; }
	void setMultiplicidad(std::pair<int, int> multiplicidad) { this->multiplicidad = multiplicidad; }
	std::pair<Nodo*, Nodo*> getNodos() { return nodos; }
	void setNodos(std::pair<Nodo*, Nodo*> nodos) { this->nodos = nodos; }

protected:
	std::string nombre;
	std::string tipo;
	std::string peso;
	std::string descripcion;
	std::pair<int, int> multiplicidad;
	std::pair<Nodo*, Nodo*> nodos;
};

Arista::Arista()
{
	std::cout << "creado" << endl;
}

Arista::Arista(string nombre) : nombre{ nombre }
{
	std::cout << "creado con el nombre " << nombre << endl;
}

Arista::~Arista()
{
	std::cout << "Eliminando arista" << endl;
}

#endif // ARISTA_H
