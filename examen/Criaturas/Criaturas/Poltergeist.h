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

string Poltergeist::tipo = "Poltergeist";

Poltergeist::Poltergeist() {}

Poltergeist::~Poltergeist() {}

Especie* Poltergeist::reproducirse() {
	return new Poltergeist();
}

string Poltergeist::getTipo() {
	return tipo;
}
