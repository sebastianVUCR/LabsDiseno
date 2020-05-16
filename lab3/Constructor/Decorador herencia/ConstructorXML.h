#ifndef CONSTRUCTORXML_H
#define CONSTRUCTORXML_H

#include "ConstructorAbstracto.h"

using namespace std;

class ConstructorXML : public ConstructorAbstracto
{
    public:
        ConstructorXML() {}

        virtual void exportar() {}
        virtual void inicioObjeto(string nombre) {}
        virtual void finObjeto() {}
        virtual string obtenerSalida()
        {
            return salida;
        }

        virtual string obtenerInfoClase() { return ""; }
        virtual string obtenerInfoNodo() { return""; }

        virtual ~ConstructorXML() {}

    protected:

    private:
        string salida;
};

#endif // CONSTRUCTORXML_H
