#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Arista.h"

using namespace std;

class Dependencia : public Arista
{
	public:
		Dependencia(Arista& arista) :arista{ arista }
		{
			this->setNombre(arista.getNombre());
		}
		~Dependencia() {}

		virtual void dibujar() override;
		virtual void cortar() override;
		virtual void eliminar() override;
		virtual void reducir() override;
		virtual void copiar() override;

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
		Arista& arista;
};


void Dependencia::dibujar()
{
	arista.dibujar();
	cout << ", esta arista dibujada es de tipo Dependencia" << endl;
}

void Dependencia::cortar()
{
	arista.cortar();
	cout << ", esta arista dibujada es de tipo Dependencia" << endl;
}

void Dependencia::eliminar()
{
	arista.eliminar();
	cout << ", esta arista eliminada es de tipo Dependencia" << endl;
}

void Dependencia::reducir()
{
	arista.reducir();
	cout << ", esta arista reducida es de tipo Dependencia" << endl;
}

void Dependencia::copiar()
{
	arista.copiar();
	cout << ", esta arista copiada es de tipo Dependencia" << endl;
}