#pragma once
#include "Especie.h"

class Poro : public Especie {
public:
	Poro();
	~Poro();

	virtual Especie* reproducirse();
	virtual string getTipo();
	
private:
	static string tipo;
};