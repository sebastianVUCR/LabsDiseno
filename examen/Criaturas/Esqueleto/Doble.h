#pragma once
#include <sstream>
using namespace std;

#include "ObtAsg.h"

class Doble : public ObtAsg< double >
{
public:
	Doble();
	Doble(double d);
	virtual ~Doble();

	virtual void asg(double o) override;
	virtual double obt() const override;
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	double valor;
};