#pragma once

#include <string>
#include"Arista.h"
#include "AristaND.h"

template<typename T>
class Contenido: public T
{
	static_assert(is_base_of<AristaND, T>::value, "Template argument must be a AristaND");

	public:
		Contenido(){}
		Contenido(string nombre) {
			nombre = nombre;
			cout << "Contenido creado con nombre " << nombre << " " << T::getDIRECCION() << " " << endl;
		}
		~Contenido(){}

		static const std::string getTIPO() { return "contenido"; }

		std::string getNombre() { return nombre; }
		void setNombre(std::string nombre) { this->nombre = nombre; }

	private:
		std::string nombre;
};