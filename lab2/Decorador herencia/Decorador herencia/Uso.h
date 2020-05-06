#pragma once

#include <string>

class Uso
{
public:
	Uso() {}
	virtual ~Uso() {}

	std::string getNombre() { return nombre; }
	std::string setNombre(std::string nombre) { this->nombre = nombre; }

private:
	std::string nombre;
};
