#pragma once

#include <string>
#include "AristaND.h"
#include"Arista.h"

template<typename T>
class Agregacion: public T
{
	static_assert(is_base_of<AristaND, T>::value, "Template argument must be a AristaND");

	public:
		Agregacion(){}
		Agregacion(string nombre) {
			nombre = nombre;
			cout << "Agregacion creado con nombre " << nombre << " " << T::getDIRECCION() << " " << endl;
		}

		static const std::string getTIPO() { return "agregacion"; }

		~Agregacion() {}

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};