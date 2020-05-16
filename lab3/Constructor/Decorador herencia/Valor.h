#ifndef VALOR_H
#define VALOR_H

#include "Tipo.h"

class Valor
{
    public:
        Valor(){}
        virtual ~Valor() {}
        virtual string toString() = 0;
        virtual tipo::tipo_atributo obtTipo() = 0;

    protected:

    private:
};

#endif // VALOR_H
