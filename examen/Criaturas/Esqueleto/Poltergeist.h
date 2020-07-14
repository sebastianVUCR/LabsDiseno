#pragma once
#include "Especie.h"

class Poltergeist : public Especie {
public:
	Poltergeist();
	~Poltergeist();

	virtual Especie* reproducirse();
	virtual string getTipo();

private:
	static string tipo;
};