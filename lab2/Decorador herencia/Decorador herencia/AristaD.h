#ifndef ARISTAD_H
#define ARISTAD_H

#include "Arista.h"

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

void AristaD::dibujar() {}
void AristaD::cortar() {}
void AristaD::eliminar() {}
void AristaD::reducir() {}
void AristaD::copiar() {}

#endif // ARISTAD_H
