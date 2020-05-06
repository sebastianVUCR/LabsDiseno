#pragma once

#include <string>

class Composicion
{
	public:
		Composicion();
		~Composicion();

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};
