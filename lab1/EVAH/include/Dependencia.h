#pragma once

#include <string>

class Dependencia
{
	Dependencia();
	~Dependencia();

	std::string getNombre() { return nombre; }
	std::string setNombre(std::string nombre) { this->nombre = nombre; }

private:
	std::string nombre;
};
