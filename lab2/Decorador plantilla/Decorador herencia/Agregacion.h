#pragma once

#include <string>
#include "AristaND.h"
#include"Arista.h"

class Agregacion
{
	public:
		Agregacion(){}

		static const std::string getTIPO() { return "agregacion"; }

		~Agregacion() {}

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};