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