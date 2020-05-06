#pragma once

#include <string>
#include <iostream>
#include "Arista.h"

using namespace std;

class Asociacion
{
	public:
		Asociacion(){}
		virtual ~Asociacion() {}

		static const std::string getTIPO() { return "asociacion"; }

		string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		string nombre;
};