#pragma once
#include "Especie.h"

class Poro : public Especie {
public:
	Poro();
	~Poro();

	virtual Especie* reproducirse();
	virtual string getTipo();
	
private:
	static string tipo;
};

string Poro::tipo = "Poro";

Poro::Poro(){}

Poro::~Poro() {}

Especie* Poro::reproducirse() {
	return new Poro();
}

string Poro::getTipo(){
	return tipo;
}