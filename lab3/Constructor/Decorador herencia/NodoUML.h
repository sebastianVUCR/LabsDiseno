#ifndef NODOUML_H
#define NODOUML_H

#include "Tipo.h"

using namespace std;

class NodoUML
{
    public:
        NodoUML() {}
        virtual tipo::tipo_atributo obtTipo() const = 0;
        virtual string toString() const = 0;
        virtual ~NodoUML() {}

    protected:

    private:
        string nombre;
        string idString;
};

#endif // NODOUML_H
