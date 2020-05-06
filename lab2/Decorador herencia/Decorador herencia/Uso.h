#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Arista.h"

using namespace std;

class Uso : public Arista
{
public:
	Uso(Arista& arista):arista{ arista }
	{
		this->setNombre(arista.getNombre());
	}
	
	virtual ~Uso() {}

	virtual void dibujar() override;
	virtual void cortar();
	virtual void eliminar();
	virtual void reducir();
	virtual void copiar();

	std::string getNombre() { return nombre; }
	void setNombre(std::string nombre) { this->nombre = nombre; }

private:
	std::string nombre;
	Arista& arista;
};


void Uso::dibujar()
{
	arista.dibujar();
	cout << ", esta arista dibujada es de tipo Uso"<<endl;
}

void Uso::cortar() 
{
	arista.cortar();
	cout << ", esta arista dibujada es de tipo Uso" << endl;
}

void Uso::eliminar()
{
	arista.eliminar();
	cout << ", esta arista eliminada es de tipo Uso" << endl;
}

void Uso::reducir()
{
	arista.reducir();
	cout << ", esta arista reducida es de tipo Uso" << endl;
}

void Uso::copiar()
{
	arista.copiar();
	cout << ", esta arista copiada es de tipo Uso" << endl;
}