#pragma once
#include <string>
#include "Valor.h"

using namespace std;

class Especie{
public:
	Especie();
	~Especie();

	virtual Especie* reproducirse() = 0;
	virtual string getTipo();

private:
	static string tipo;
};

string Especie::tipo = "Especie";

Especie::Especie() {

}

Especie::~Especie() {

}

string Especie::getTipo() {
	return tipo;
}