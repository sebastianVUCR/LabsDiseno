#ifndef CLASEUML_H
#define CLASEUML_H

#include "Tipo.h"

using namespace std;

class ClaseUML
{
    public:
        ClaseUML() {}
        virtual tipo::tipo_atributo obtTipo() const = 0;
        virtual string toString() const = 0;
        virtual ~ClaseUML() {}

    protected:

    private:
        string nombre;
        string idString;
};



#endif // CLASEUML_H
