#ifndef ARISTAD_H
#define ARISTAD_H

#include <iostream>
#include "Arista.h"

using namespace std;

/* REPRESENTA UNA ARISTA DIRIGIDA GEN�RICA */
class AristaD: public Arista
{
public:
	AristaD();
	AristaD(string nombre);
	~AristaD();

	void dibujar();
	void cortar();
	void eliminar();
	void reducir();
	void copiar();

	static const std::string getDIRECCION() { return "dirigida"; }

private:
};

AristaD::AristaD(){
	setNombre("\"no asignado\"");
}

AristaD::AristaD(string nombre){
	setNombre(nombre);
}

AristaD::~AristaD()
{
	std::cout << "Destruyendo arista dirigida con nombre " << nombre << endl;
}

void AristaD::dibujar() 
{
	std::cout << "Dibujando arista dirigida con nombre " << nombre << endl;
}
void AristaD::cortar() 
{
	std::cout << "Cortando arista dirigida con nombre " << nombre << endl;
}
void AristaD::eliminar() 
{
	std::cout << "Eliminando arista dirigida con nombre " << nombre << endl;
}
void AristaD::reducir() 
{
	std::cout << "Reduciendo arista dirigida con nombre " << nombre << endl;
}
void AristaD::copiar() 
{
	std::cout << "Copiando arista dirigida con nombre " << nombre << endl;
}

#endif // ARISTAD_H
