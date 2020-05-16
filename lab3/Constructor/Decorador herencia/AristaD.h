#ifndef ARISTAD_H
#define ARISTAD_H

#include <iostream>
#include "Arista.h"
#include "Nodo.h"

using namespace std;

class Arista;


/* REPRESENTA UNA ARISTA DIRIGIDA GENÉRICA */
class AristaD: public Arista
{
public:
	AristaD(string nombre);
	virtual ~AristaD();

	virtual void dibujar();
	virtual void cortar();
	virtual void eliminar();
	virtual void reducir();
	virtual void copiar();

private:
	Nodo* direccion;
};

AristaD::AristaD(string nombre)
{
	this->setNombre(nombre);
}

AristaD::~AristaD()
{

}

void AristaD::dibujar() 
{
	cout << "Dibujando arista dirigida con nombre " << this->getNombre();
}
void AristaD::cortar() 
{
	cout << "Cortando arista dirigida con nombre " << this->getNombre();
}
void AristaD::eliminar() 
{
	cout << "eliminando arista dirigida con nombre " << this->getNombre();
}
void AristaD::reducir() 
{
	cout << "Reduciendo arista dirigida con nombre " << this->getNombre();
}
void AristaD::copiar() 
{
	cout << "Copiando arista dirigida con nombre " << this->getNombre();
}

#endif // ARISTAD_H
