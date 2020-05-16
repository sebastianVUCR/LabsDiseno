#ifndef CONSTRUCTORJSON_H
#define CONSTRUCTORJSON_H

#include "ConstructorAbstracto.h"

using namespace std;


class ConstructorJSON : public ConstructorAbstracto
{
    public:
        ConstructorJSON() {}
        virtual void exportar() {}
        virtual void inicioObjeto(string nombre) {}
        virtual void finObjeto() {}
        virtual string obtenerSalida() 
        {
            return salida;
        }
        virtual ~ConstructorJSON() {}
        virtual string obtenerInfoClase() { return ""; }
        virtual string obtenerInfoNodo() { return""; }

    protected:

    private:
        string salida;
};

#endif // CONSTRUCTORJSON_H
