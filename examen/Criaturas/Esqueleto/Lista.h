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