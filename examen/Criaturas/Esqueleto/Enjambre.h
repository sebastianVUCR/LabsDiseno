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