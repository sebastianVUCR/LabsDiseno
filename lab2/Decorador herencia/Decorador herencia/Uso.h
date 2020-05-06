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

//(Shape& shape, const string& color) : shape{ shape }, color{ color }
/*
Uso::Uso(Arista& arista)
{
	this->setNombre(arista.getNombre());
}*/

void Uso::dibujar()
{
	arista.dibujar();
	cout << ", esta arista es de tipo Uso"<<endl;
}
void Uso::cortar() {}
void Uso::eliminar() {}
void Uso::reducir() {}
void Uso::copiar() {}