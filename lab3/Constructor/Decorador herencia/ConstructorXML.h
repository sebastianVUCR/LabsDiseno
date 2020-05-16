#ifndef CONSTRUCTORXML_H
#define CONSTRUCTORXML_H

#include "ConstructorAbstracto.h"

using namespace std;

class ConstructorXML : public ConstructorAbstracto
{
    public:
        ConstructorXML() {}
        virtual ~ConstructorXML() {}

    protected:

    private:
        string salida;
};

#endif // CONSTRUCTORXML_H
