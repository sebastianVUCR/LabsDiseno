#pragma once
#include "Valor.h"
template <class T>
class Plantilla :	public Valor
{
	public:
		Plantilla() {}
		virtual ~Plantilla() {}
		virtual T getValor() = 0;
		virtual void setValor(T valor) = 0;
	protected:
	private:
};

