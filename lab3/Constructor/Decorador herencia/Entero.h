#ifndef ENTERO_H
#define ENTERO_H

#include "Valor.h"


class Entero : public Valor<int>
{
    public:
        Entero() 
        {
            valor = 0;
        }
        Entero(int nuevoValor):valor(nuevoValor)
        {

        }
        virtual ~Entero() {}

        int getValor() 
        {
            return valor; 
        }
        void setValor(int val) 
        { 
            valor = val; 
        }

        string toString()
        {
            return to_string(valor);
        }
        tipo::tipo_atributo obtTipo()
        {
            return tipo::tipo_atributo::Entero;
        }

    protected:

    private:
        int valor;
};

#endif // ENTERO_H
