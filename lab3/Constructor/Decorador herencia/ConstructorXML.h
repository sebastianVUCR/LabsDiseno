#ifndef CONSTRUCTORXML_H
#define CONSTRUCTORXML_H

#include "ConstructorAbstracto.h"
#include "AristaD.h"
#include "AristaND.h"
#include "NodoUML.h"

using namespace std;

class ConstructorXML : public ConstructorAbstracto
{
    public:
        ConstructorXML(){}

        virtual void exportar() {}
        virtual void inicioObjeto(string nombre);
        virtual void finObjeto();
        virtual string obtenerSalida(){return salida;}

        virtual string serializarInfoArista(Arista* arista);
        virtual string serializarInfoNodo(NodoUML* nodo);

        ~ConstructorXML() {}

    protected:

};

void ConstructorXML::inicioObjeto(string nombre)
{
    salida = "<Grafo>";
}

void ConstructorXML::finObjeto()
{
    salida = salida + "</Grafo>";
}

string ConstructorXML::serializarInfoArista(Arista* arista)
{
    salida = salida + "<Salida>\n";
    salida = salida + "\t<Nombre>";
    arista->getNombre() + "</Nombre>\n";
    salida = salida + "\t\t<Tipo>" + arista->getTipo() + "</Tipo>";
    salida = salida + "\t\t<Nodos>" + arista->getNodos().first->getNombre() + "," + arista->getNodos().second->getNombre() + "</Nodos>\n";
    salida = salida + "</Salida>\n";
    return salida;
}
string ConstructorXML::serializarInfoNodo(NodoUML* nodo)
{
    salida = salida + "<Nodo>\n";
    salida = salida + "\t<Nombre>: " + nodo->getNombre() + "</Nombre>\n";
    salida = salida + "</Nodo>\n";
    return salida;
}

//serializacion = serializacion + "< " + nombreObjeto + ' ';

#endif // CONSTRUCTORXML_H
