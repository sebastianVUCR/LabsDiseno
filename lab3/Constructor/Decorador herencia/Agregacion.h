#pragma once

#include <string>
#include "AristaND.h"
#include"Arista.h"

class AristaND;

class Agregacion:public AristaND
{
	public:
		Agregacion(string nombre)
		{
			this->setNombre(nombre);
		}

		virtual void dibujar();
		virtual void cortar();
		virtual void eliminar();
		virtual void reducir();
		virtual void copiar();

		~Agregacion() {}

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};


void Agregacion::dibujar()
{
	cout << "Dibujando arista no dirigida con nombre " << this->getNombre() << " de tipo agregacion" << endl;
}

void Agregacion::cortar()
{
	cout << "Cortando arista no dirigida con nombre " << this->getNombre() << " de tipo agregacion" << endl;
}

void Agregacion::eliminar()
{
	cout << "Eliminando arista no dirigida con nombre " << this->getNombre() << " de tipo agregacion" << endl;
}

void Agregacion::reducir()
{
	cout << "Reduciendo arista no dirigida con nombre " << this->getNombre() << " de tipo agregacion" << endl;
}
void Agregacion::copiar()
{
	cout << "Copiando arista no dirigida con nombre " << this->getNombre() << " de tipo agregacion" << endl;
}