#ifndef ARISTAND_H
#define ARISTAND_H

#include <iostream>
using namespace std;

#include "Arista.h"

/* REPRESENTA UNA ARISTA NO DIRIGIDA GENÉRICA */
template <typename T>
class AristaND
{
public:
	AristaND();
	AristaND(string nombre);
	~AristaND();
	 
	void dibujar();
	void cortar();
	void eliminar();
	void reducir();
	void copiar();

	static const std::string getDIRECCION() { return "no dirigida"; }

private:
	string nombre;
};

template <typename T>
AristaND<T>::AristaND(): nombre{""}{}

template <typename T>
AristaND<T>::AristaND(string nombre) : nombre{nombre} {}

template <typename T>
AristaND<T>::~AristaND()
{
	std::cout << "Eliminando arista no dirigida con nombre " << nombre << endl;
}

template <typename T>
void AristaND<T>:: dibujar()
{
	cout<<"Dibujando arista no dirigida con nombre " << nombre << endl;
}

template <typename T>
void AristaND<T>::cortar() 
{
	cout << "Cortando arista no dirigida con nombre ";
}

template <typename T>
void AristaND<T>::eliminar() 
{
	cout << "Eliminando arista no dirigida con nombre \n";
}

template <typename T>
void AristaND<T>::reducir()
{
	cout << "Reduciendo arista no dirigida con nombre ";
}

template <typename T>
void AristaND<T>::copiar()
{
	cout << "Copiando arista no dirigida con nombre ";
}

#endif // ARISTAND_H
