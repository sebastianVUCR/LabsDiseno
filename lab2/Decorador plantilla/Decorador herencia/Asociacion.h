#pragma once

#include <string>
#include <iostream>
#include "Arista.h"

using namespace std;

class Arista;

class Asociacion:public Arista
{
	public:
		Asociacion(Arista& arista) :arista{ arista }
		{
			this->setNombre(arista.getNombre());
		}
		virtual ~Asociacion() {}

		virtual void dibujar() override;
		virtual void cortar() override;
		virtual void eliminar() override;
		virtual void reducir() override;
		virtual void copiar() override;

		string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		string nombre;
		Arista& arista;
};


void Asociacion::dibujar()
{
	arista.dibujar();
	cout << ", esta arista dibujada es de tipo Asociacion" << endl;
}

void Asociacion::cortar()
{
	arista.cortar();
	cout << ", esta arista dibujada es de tipo Asociacion" << endl;
}

void Asociacion::eliminar()
{
	arista.eliminar();
	cout << ", esta arista eliminada es de tipo Asociacion" << endl;
}

void Asociacion::reducir()
{
	arista.reducir();
	cout << ", esta arista reducida es de tipo Asociacion" << endl;
}

void Asociacion::copiar()
{
	arista.copiar();
	cout << ", esta arista copiada es de tipo Asociacion" << endl;
}