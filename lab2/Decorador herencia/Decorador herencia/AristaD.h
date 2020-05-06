#ifndef ARISTAD_H
#define ARISTAD_H

#include <iostream>
#include "Arista.h"

using namespace std;

class Arista;


/* REPRESENTA UNA ARISTA DIRIGIDA GENÉRICA */
class AristaD: public Arista
{
public:
	AristaD();
	virtual ~AristaD();

	virtual void dibujar();
	virtual void cortar();
	virtual void eliminar();
	virtual void reducir();
	virtual void copiar();
};

AristaD::AristaD()
{

}

AristaD::~AristaD()
{

}

void AristaD::dibujar() 
{
	cout << "Dibujando arista dirigida con nombre " << this->getNombre() << endl;
}
void AristaD::cortar() 
{
	cout << "Cortando arista dirigida con nombre " << this->getNombre() << endl;
}
void AristaD::eliminar() 
{
	cout << "eliminando arista dirigida con nombre " << this->getNombre() << endl;
}
void AristaD::reducir() 
{
	cout << "Reduciendo arista dirigida con nombre " << this->getNombre() << endl;
}
void AristaD::copiar() 
{
	cout << "Copiando arista dirigida con nombre " << this->getNombre() << endl;
}

#endif // ARISTAD_H
