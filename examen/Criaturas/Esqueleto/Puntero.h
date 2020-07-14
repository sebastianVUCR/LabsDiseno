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