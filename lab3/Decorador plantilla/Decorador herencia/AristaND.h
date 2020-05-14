#ifndef ARISTAND_H
#define ARISTAND_H

#include <iostream>
#include "Arista.h"

using namespace std;
/* REPRESENTA UNA ARISTA NO DIRIGIDA GENÉRICA */
class AristaND:  public Arista
{
public:
	AristaND();
	AristaND(string nombre);
	~AristaND();
	 
	void dibujar() override;
	void cortar() override;
	void eliminar() override;
	void reducir() override;
	void copiar() override;

	static const std::string getDIRECCION() { return "no dirigida"; }

private:
};

AristaND::AristaND(){
	nombre = "\"no asignado\"";
}

AristaND::AristaND(string nombre){
	setNombre(nombre);
}

AristaND::~AristaND()
{
	std::cout << "Destruyendo arista no dirigida con nombre " << nombre << endl;
}

void AristaND::dibujar()
{
	cout<<"Dibujando arista no dirigida con nombre " << nombre << endl;
}

void AristaND::cortar() 
{
	cout << "Cortando arista no dirigida con nombre " << nombre << endl;
}

void AristaND::eliminar() 
{
	cout << "Eliminando arista no dirigida con nombre " << nombre << endl;
}

void AristaND::reducir()
{
	cout << "Reduciendo arista no dirigida con nombre " << nombre << endl;
}

void AristaND::copiar()
{
	cout << "Copiando arista no dirigida con nombre " << nombre << endl;
}

#endif // ARISTAND_H
