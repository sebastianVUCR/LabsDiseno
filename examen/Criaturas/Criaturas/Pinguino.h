#pragma once
#include "Especie.h"

class Pinguino : public Especie {
public:
	Pinguino();
	~Pinguino();

	virtual Especie* reproducirse();
	virtual string getTipo();

private:
	static string tipo;
};

string Pinguino::tipo = "Pinguino";

Pinguino::Pinguino() {}

Pinguino::~Pinguino() {}

Especie* Pinguino::reproducirse() {
	return new Pinguino();
}

string Pinguino::getTipo() {
	return tipo;
}
