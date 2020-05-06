#pragma once

#include <string>
#include"Arista.h"
#include "AristaND.h"

class Contenido
{
	public:
		Contenido() {}
		~Contenido() {}

		static const std::string getTIPO() { return "contenido"; }

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};