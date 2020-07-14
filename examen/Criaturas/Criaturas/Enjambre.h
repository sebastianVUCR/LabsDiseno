#pragma once
#include <string>
#include "Criatura.h"

using namespace std;

class Enjambre {
private:
	Enjambre();
	Enjambre(Criatura* c);
	~Enjambre();

	void reproducirse();
	string getEspecie() const;
	void agregarCreatura(Criatura* c);

public:
	vector<Criatura*> creaturas;

	const string TIPO;
};

Enjambre::Enjambre(Criatura* c) : TIPO(c->obtEspecie()) {
	creaturas = vector<Criatura*>();
	creaturas.insert(creaturas.end(), c);
}

void Enjambre::reproducirse() {
	for (int x = 0; x < creaturas.size(); ++x) {
		creaturas.push_back(creaturas[x]->reproducirse());
	}
}

string Enjambre::getEspecie() const {
	return TIPO;
}