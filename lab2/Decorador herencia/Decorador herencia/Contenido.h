#pragma once

#include <string>

class Contenido
{
	Contenido();
	~Contenido();

	std::string getNombre() { return nombre; }
	std::string setNombre(std::string nombre) { this->nombre = nombre; }

private:
	std::string nombre;
};
