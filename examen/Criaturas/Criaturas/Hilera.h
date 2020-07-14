#pragma once
#include <string>
#include "ObtAsg.h"

using namespace std;

class Hilera : public ObtAsg< string > {
public:
	Hilera();
	Hilera(string v);
	virtual ~Hilera();

	virtual void asg(string o) override;
	virtual string obt() const override;
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	string valor;
};

Hilera::Hilera()
{
}

Hilera::Hilera(string v) : valor(v)
{
}

Hilera::~Hilera()
{
}

void Hilera::asg(string o)
{
	valor = o;
}

string Hilera::obt() const
{
	return valor;
}

tipo::tipo_atributo Hilera::obtTipo() const
{
	return tipo::tipo_atributo::Hilera;
}

string Hilera::toString() const
{
	return valor;
}