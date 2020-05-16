#ifndef DOBLE_H
#define DOBLE_H

#include "Valor.h"

using namespace std;


class Doble : public Valor<double>
{
    public:
        Doble() 
        {
            valor = 0;
        }
        Doble(double nuevoValor) :valor(nuevoValor)
        {}
        virtual ~Doble() {}

        double getValor() { return valor; }
        void setValor(double val) { valor = val; }
        string toString()
        {
            return to_string(valor);
        }
        tipo::tipo_atributo obtTipo()
        {
            return tipo::tipo_atributo::Doble;
        }

    protected:

    private:
        double valor;
};

#endif // DOBLE_H
