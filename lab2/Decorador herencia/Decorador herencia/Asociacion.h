#pragma once

#include <string>

class Asociacion
{
	public:
		Asociacion();
		~Asociacion();

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};
