#pragma once
#include <iostream>
#include <sstream>
using namespace std;

#include "ObtAsg.h"
class Booleano : public ObtAsg< bool >
{
public:
	Booleano();
	Booleano(bool v);
	virtual ~Booleano();

	virtual void asg(bool o) override;
	virtual bool obt() const override;
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	bool valor;
};