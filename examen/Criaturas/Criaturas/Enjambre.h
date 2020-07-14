#pragma once
#include <string>
#include "Criatura.h"

using namespace std;

class Enjambre {
public:
	Enjambre();
	Enjambre(Criatura* c);
	~Enjambre();

	void reproducirse();
	string getEspecie() const;
	void agregarCreatura(Criatura* c);
	string toString();

private:
	vector<Criatura*> creaturas;

	string tipo;
};

Enjambre::Enjambre(){
	tipo = "Poro";
	creaturas = vector<Criatura*>();
}

Enjambre::Enjambre(Criatura* c){
	tipo = c->obtEspecie();
	creaturas = vector<Criatura*>();
	creaturas.insert(creaturas.end(), c);
}

Enjambre::~Enjambre() {}

void Enjambre::reproducirse() {
	int size = creaturas.size();
	for (int x = 0; x < size; ++x) {
		creaturas.push_back(creaturas[x]->reproducirse());
	}
}

string Enjambre::getEspecie() const {
	return tipo;
}

void Enjambre::agregarCreatura(Criatura* c) {
	creaturas.push_back(c);
}

string Enjambre::toString() {
	string hilera = "[";
	for (size_t i = 0; i < creaturas.size(); i++)
	{
		hilera += "(" + creaturas[i]->obtEspecie() + ")";
	}
	hilera += "]";
	return hilera;
}