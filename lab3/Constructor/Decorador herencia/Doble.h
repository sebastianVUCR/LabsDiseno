#ifndef DOBLE_H
#define DOBLE_H

#include <Valor.h>


class Doble : public Valor
{
    public:
        Doble() {}
        virtual ~Doble() {}

        double getValor() { return valor; }
        void setValor(double val) { valor = val; }

    protected:

    private:
        double valor;
};

#endif // DOBLE_H
