#ifndef ENTERO_H
#define ENTERO_H

#include <Valor.h>


class Entero : public Valor
{
    public:
        Entero() {}
        virtual ~Entero() {}

        int getValor() { return valor; }
        void setValor(int val) { valor = val; }

    protected:

    private:
        int valor;
};

#endif // ENTERO_H
