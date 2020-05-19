

#ifndef CONSTRUCTORABSTRACTO_H
#define CONSTRUCTORABSTRACTO_H


#include "string.h"

#include "Arista.h"
#include "Nodo.h"

using namespace std;

class ConstructorAbstracto
{
    public:
        ConstructorAbstracto() {}
        virtual void exportar() = 0;
        virtual void inicioObjeto(string nombre) = 0;
        virtual void finObjeto() = 0;
        virtual string obtenerSalida() = 0;
        virtual string serializarInfoArista(Arista* arista) = 0;//convierte los atributos a string y los concatena
        virtual string serializarInfoNodo(Nodo* nodo) = 0;//convierte los atributos a string y los concatena
        ~ConstructorAbstracto() {}

    protected:
        string salida = "";
};

#endif // CONSTRUCTORABSTRACTO_H
