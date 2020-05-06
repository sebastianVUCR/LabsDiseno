#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Arista.h"

using namespace std;

class Uso
{
public:
	Uso(){}
	~Uso() {}

	static const std::string getTIPO() { return "uso"; }

	std::string getNombre() { return nombre; }
	void setNombre(std::string nombre) { this->nombre = nombre; }

private:
	std::string nombre;
};
