#ifndef VALOR_H
#define VALOR_H

#include"NodoUML.h"
#include"ClaseUML.h"
#include "Tipo.h"

template <class T>
class Valor:NodoUML, ClaseUML
{
    public:
        Valor() {}
        virtual ~Valor() {}


        virtual string toString() = 0;
        virtual tipo::tipo_atributo obtTipo() = 0;
        virtual T getValor() = 0;
        virtual void setValor(T valor) =0;
    protected:

    private:
};

#endif // VALOR_H
