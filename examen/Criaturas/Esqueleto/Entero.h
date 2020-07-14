#pragma once

#include <sstream>
using namespace std;

#include "ObtAsg.h"
class Entero : public ObtAsg< int >
{
public:
	Entero();
	Entero(int v);
	virtual ~Entero();

	virtual void asg(int o) override;
	virtual int obt() const override;
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	int valor;
};