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