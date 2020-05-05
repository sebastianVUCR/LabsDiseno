#ifndef ARISTAD_H
#define ARISTAD_H

#include "Contenido.h"
#include "Composicion.h"
#include "Agregacion.h"

/* REPRESENTA UNA ARISTA DIRIGIDA GENÉRICA */
class AristaD: public Contenido, public Composicion, public Agregacion
{
public:
	AristaD();
	virtual ~AristaD();
};

AristaD::AristaD()
{

}

AristaD::~AristaD()
{

}

#endif // ARISTAD_H
