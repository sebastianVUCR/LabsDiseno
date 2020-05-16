#pragma once

#include <string>
#include"Arista.h"
#include "AristaND.h"

class Composicion: public AristaND
{
	public:
		Composicion(string nombre);
		virtual void dibujar();
		virtual void cortar();
		virtual void eliminar();
		virtual void reducir();
		virtual void copiar();
		~Composicion() {}

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};


void Composicion::dibujar()
{
	cout << "Dibujando arista no dirigida con nombre " << this->getNombre() << " de tipo composicion" << endl;
}

void Composicion::cortar()
{
	cout << "Cortando arista no dirigida con nombre " << this->getNombre() << " de tipo composicion" << endl;
}

void Composicion::eliminar()
{
	cout << "Eliminando arista no dirigida con nombre " << this->getNombre() << " de tipo composicion" << endl;
}

void Composicion::reducir()
{
	cout << "Reduciendo arista no dirigida con nombre " << this->getNombre() << " de tipo composicion" << endl;
}
void Composicion::copiar()
{
	cout << "Copiando arista no dirigida con nombre " << this->getNombre() << " de tipo composicion" << endl;
}

Composicion::Composicion(string nombre)
{
	this->setNombre(nombre);
}
