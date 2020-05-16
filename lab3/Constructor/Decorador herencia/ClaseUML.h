#ifndef CLASEUML_H
#define CLASEUML_H

#include "Tipo.h"

#include "Entero.h"
#include "Doble.h"
#include "Valor.h"

using namespace std;

class Valor;

class ClaseUML
{
    public:
        ClaseUML() {}
        
        ClaseUML(string nombre, int nuevoValor)
        {
            valor = new Entero(nuevoValor);
        }
        ClaseUML(string nombre, double nuevoValor)
        {
            valor = new Doble(nuevoValor);
        }

        string to_string()
        {
            return valor->toString();
        }

        Valor* obtValor()
        {
            return valor;
        }

        tipo::tipo_atributo obtTipo()
        {
            return valor->obtTipo();
        }



        virtual ~ClaseUML() {}

    protected:

    private:
        string nombre;
        Valor* valor;
};



#endif // CLASEUML_H
