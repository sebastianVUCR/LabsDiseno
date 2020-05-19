#ifndef NODOUML_H
#define NODOUML_H

#include "Tipo.h"
#include "Entero.h"
#include "Doble.h"

class Valor;

using namespace std;

class NodoUML
{
    public:
        NodoUML() {}
        NodoUML(string nombre, int nuevoValor)
        {
            valor = new Entero(nuevoValor);
        }
        NodoUML(string nombre, double nuevoValor)
        {
            valor = new Doble(nuevoValor);
        }

        string to_string()
        {
            return valor->toString();
        }
        
        string getNombre()
        {
            return nombre;
        }

        Valor* obtValor()
        {
            return valor;
        }

        tipo::tipo_atributo obtTipo()
        {
            return valor->obtTipo();
        }

        virtual ~NodoUML() {}

    protected:

    private:
        string nombre;
        Valor* valor;
};

#endif // NODOUML_H
