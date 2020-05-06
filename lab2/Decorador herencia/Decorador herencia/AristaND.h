#ifndef ARISTAND_H
#define ARISTAND_H

#include <iostream>
using namespace std;

#include "Arista.h"

class Arista;

/* REPRESENTA UNA ARISTA NO DIRIGIDA GENÉRICA */
class AristaND:public Arista
{
	public:
		AristaND(string nombre);
		virtual ~AristaND();


		virtual void dibujar();
		virtual void cortar();
		virtual void eliminar();
		virtual void reducir();
		virtual void copiar();

	};

	AristaND::AristaND(string nombre)
	{
		this->setNombre(nombre);
	}

	AristaND::~AristaND()
	{

	}


	void AristaND:: dibujar() 
	{
		cout<<"Dibujando arista no dirigida con nombre "<<this->getNombre();
	}
	void AristaND::cortar() {}
	void AristaND::eliminar() {}
	void AristaND::reducir() {}
	void AristaND::copiar() {}
#endif // ARISTAND_H
