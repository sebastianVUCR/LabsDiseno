#pragma once

#include <string>
#include"Arista.h"
#include "AristaND.h"

template<typename T>
class Composicion: public T
{
	static_assert(is_base_of<AristaND, T>::value, "Template argument must be a AristaND");
	public:
		Composicion(){}
		Composicion(string nombre) {
			nombre = nombre;
			cout << "Composicion creado con nombre " << nombre << " " << T::getDIRECCION() << " " << endl;
		}
		~Composicion(){}

		static const std::string getTIPO() { return "composicion"; }

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};