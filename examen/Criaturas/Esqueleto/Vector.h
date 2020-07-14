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