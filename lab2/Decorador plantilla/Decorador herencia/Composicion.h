#pragma once

#include <string>
#include"Arista.h"
#include "AristaND.h"

class Composicion
{
	public:
		Composicion() {}

		~Composicion() {}

		static const std::string getTIPO() { return "composicion"; }

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};