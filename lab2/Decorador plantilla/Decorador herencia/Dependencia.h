#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Arista.h"

using namespace std;

template<typename T>
class Dependencia: public T
{
	static_assert(is_base_of<Arista, T>::value, "Template argument must be a Arista");

	public:
		Dependencia(){}
		Dependencia(string nombre) {
			nombre = nombre;
			cout << "Dependencia creado con nombre " << nombre << " " << T::getDIRECCION() << " " << endl;
		}
		~Dependencia() {}

		static const std::string getTIPO() { return "dependencia"; }

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};
