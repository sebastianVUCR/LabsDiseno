#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Arista.h"

using namespace std;

class Dependencia
{
	public:
		Dependencia(){}
		~Dependencia() {}

		static const std::string getTIPO() { return "dependencia"; }

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};
