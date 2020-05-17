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
		AristaND(string nombre)
		{
			this->setNombre(nombre);
		}

		AristaND()
		{
		}


		virtual ~AristaND();


		virtual void dibujar();
		virtual void cortar();
		virtual void eliminar();
		virtual void reducir();
		virtual void copiar();

	};

	

	AristaND::~AristaND()
	{

	}


	void AristaND:: dibujar() 
	{
		cout<<"Dibujando arista no dirigida con nombre "<<this->getNombre();
	}

	void AristaND::cortar() 
	{
		cout << "Cortando arista no dirigida con nombre " << this->getNombre();
	}

	void AristaND::eliminar() 
	{
		cout << "Eliminando arista no dirigida con nombre " << this->getNombre();
	}

	void AristaND::reducir()
	{
		cout << "Reduciendo arista no dirigida con nombre " << this->getNombre();
	}
	void AristaND::copiar()
	{
		cout << "Copiando arista no dirigida con nombre " << this->getNombre();
	}
#endif // ARISTAND_H
