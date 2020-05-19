#ifndef CONSTRUCTORJSON_H
#define CONSTRUCTORJSON_H

#include "ConstructorAbstracto.h"

#include "AristaD.h"
#include "AristaND.h"
#include "NodoUML.h"
using namespace std;

class ConstructorJSON : public ConstructorAbstracto
{
    public:
        ConstructorJSON();
        virtual void exportar() {}
        virtual void inicioObjeto(string nombre);
        virtual void finObjeto();
        virtual string obtenerSalida() {return salida;}
        ~ConstructorJSON();
        virtual string serializarInfoArista(Arista* arista);
        virtual string serializarInfoNodo(NodoUML* nodo);

};

ConstructorJSON::ConstructorJSON()
{

}

ConstructorJSON::~ConstructorJSON()
{

}

void ConstructorJSON::inicioObjeto(string nombre) 
{
    salida = "{\n";
}

void ConstructorJSON::finObjeto() 
{
    salida = salida + "}";
}

string ConstructorJSON::serializarInfoArista(Arista* arista) 
{
    salida = salida + "\tArista: " + arista->getNombre() + "{\n";
    salida = salida + "\t\tTipo: " + arista->getTipo() + '\n';
    salida = salida + "\t\tDel nodo " + arista->getNodos().first->getNombre() + " a " + arista->getNodos().second->getNombre() + "\n}\n";
}
string ConstructorJSON::serializarInfoNodo(NodoUML* nodo)
{
    salida = salida + "\tNodo: " + nodo->getNombre() + "\n";
}

#endif // CONSTRUCTORJSON_H
