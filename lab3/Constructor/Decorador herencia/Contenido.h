#pragma once

#include <string>
#include"Arista.h"
#include "AristaND.h"

class Contenido: public AristaND
{
	public:
		Contenido(string nombre);
		virtual ~Contenido() {}

		virtual void dibujar();
		virtual void cortar();
		virtual void eliminar();
		virtual void reducir();
		virtual void copiar();

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};


void Contenido::dibujar()
{
	cout << "Dibujando arista no dirigida con nombre " << this->getNombre() << " de tipo contenido" << endl;
}

void Contenido::cortar()
{
	cout << "Cortando arista no dirigida con nombre " << this->getNombre() << " de tipo contenido" << endl;
}

void Contenido::eliminar()
{
	cout << "Eliminando arista no dirigida con nombre " << this->getNombre() << " de tipo contenido" << endl;
}

void Contenido::reducir()
{
	cout << "Reduciendo arista no dirigida con nombre " << this->getNombre() << " de tipo contenido" << endl;
}
void Contenido::copiar()
{
	cout << "Copiando arista no dirigida con nombre " << this->getNombre() << " de tipo contenido" << endl;
}

Contenido::Contenido(string nombre)
{
	this->setNombre(nombre);
}
