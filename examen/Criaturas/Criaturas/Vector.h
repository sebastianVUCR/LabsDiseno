#pragma once
#include <vector>
#include <sstream>
#include "ObtAsg.h"
#include "Criatura.h"

using namespace std;

template < typename T >
class Vector : public ObtAsg< vector<T> > {
public:
	Vector();
	Vector(vector<T> v);
	virtual ~Vector();

	virtual void asg(vector<T> o) override;
	virtual vector<T> obt() const override;
	void agregarElem(T t);
	virtual tipo::tipo_atributo obtTipo() const override;
	virtual string toString() const override;

private:
	vector<T> valor;
};

template < typename T >
Vector<T>::Vector()
{
	valor = vector<T>();
}

template < typename T >
Vector<T>::Vector(vector<T> v) : valor(v)
{
}

template < typename T >
Vector<T>::~Vector()
{
}

template < typename T > 
void Vector<T>::asg(vector<T> o)
{
	valor = o;
}

template < typename T > 
vector<T> Vector<T>::obt() const
{
	return valor;
}

template < typename T > 
void Vector<T>::agregarElem(T t) {
	valor.push_back(t);
}

template < typename T > 
tipo::tipo_atributo Vector<T>::obtTipo() const
{
	return tipo::tipo_atributo::Vector;
}

template < typename T > 
string Vector<T>::toString() const
{
	string hilera = "[";
	for (size_t i = 0; i < valor.size(); i++)
	{
		hilera += static_cast<T>(valor[i]).toString();
	}
	hilera += "]";
	return hilera;
}
