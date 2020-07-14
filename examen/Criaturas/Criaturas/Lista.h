#pragma once
#include <sstream>
#include "ObtAsg.h"

using namespace std;

template < typename T >
class Lista : public ObtAsg< T[] > {
public:
	Lista();
	Lista(T v[]);
	virtual ~Lista();

	virtual void asg(T o[]) override;
	virtual T* obt() const override;
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	T valor[];
};

template < typename T >
Lista<T>::Lista()
{
}

template < typename T >
Lista<T>::Lista(T v[]) : valor(v)
{
}

template < typename T >
Lista<T>::~Lista()
{
}

template < typename T >
void Lista<T>::asg(T o[])
{
	valor = o;
}

template < typename T >
T* Lista<T>::obt() const
{
	return valor;
}

template < typename T >
tipo::tipo_atributo Lista<T>::obtTipo() const
{
	return tipo::tipo_atributo::Lista;
}

template < typename T >
string Lista<T>::toString() const
{
	ostringstream o;
	o << valor;
	return o.str();
}

