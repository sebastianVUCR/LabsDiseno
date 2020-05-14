#pragma once

#include <string>
#include <iostream>
#include "Arista.h"

using namespace std;

template<typename T>
class Asociacion: public T
{
	static_assert(is_base_of<Arista, T>::value, "Template argument must be a Arista");

	public:
		Asociacion(){}
		Asociacion(string nombre) {
			nombre = nombre;
			cout << "Asociacion creado con nombre " << nombre << " " << T::getDIRECCION() << " " << endl;
		}
		~Asociacion() {}

		static const std::string getTIPO() { return "asociacion"; }

		string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		string nombre;
};