#pragma once
#include <sstream>
#include "ObtAsg.h"

using namespace std;

class Puntero : public ObtAsg< void* > {
public:
	Puntero();
	Puntero(void* v);
	virtual ~Puntero();

	virtual void asg(void* o) override;
	virtual void* obt() const override;
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	void* valor;
};

Puntero::Puntero()
{
}

Puntero::Puntero(void* v) : valor(v)
{
}

Puntero::~Puntero()
{
}

void Puntero::asg(void* o)
{
	valor = o;
}

void* Puntero::obt() const
{
	return valor;
}

tipo::tipo_atributo Puntero::obtTipo() const
{
	return tipo::tipo_atributo::Puntero;
}

string Puntero::toString() const
{
	ostringstream o;
	o << valor;
	return o.str();
}
