#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Arista.h"

using namespace std;

template<typename T>
class Uso: public T
{
	static_assert(is_base_of<Arista, T>::value, "Template argument must be a Arista");

public:
	Uso(){}
	Uso(string nombre) { 
		nombre = nombre;
		cout << "Uso creado con nombre " << nombre << " " << T::getDIRECCION() << " " << endl;
	}
	~Uso() {}

	static const std::string getTIPO() { return "uso"; }

	std::string getNombre() { return nombre; }
	void setNombre(std::string nombre) { this->nombre = nombre; }

private:
	std::string nombre;
};
