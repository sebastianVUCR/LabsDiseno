

#ifndef CONSTRUCTORABSTRACTO_H
#define CONSTRUCTORABSTRACTO_H


#include "string.h"

using namespace std;



class ConstructorAbstracto
{
    public:
        ConstructorAbstracto() {}
        virtual void exportar() = 0;
        virtual void inicioObjeto(string nombre) = 0;
        virtual void finObjeto() = 0;
        virtual string obtenerSalida() = 0;
        virtual string obtenerInfoClase() = 0;//convierte los atributos a string y los concatena
        virtual string obtenerInfoNodo() = 0;//convierte los atributos a string y los concatena
        virtual ~ConstructorAbstracto() {}

    protected:

    private:
        string salida;
};

#endif // CONSTRUCTORABSTRACTO_H
