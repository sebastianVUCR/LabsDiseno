#ifndef CONSTRUCTORJSON_H
#define CONSTRUCTORJSON_H

#include "ConstructorAbstracto.h"

using namespace std;


class ConstructorJSON : public ConstructorAbstracto
{
    public:
        ConstructorJSON() {}
        virtual ~ConstructorJSON() {}

    protected:

    private:
        string salida;
};

#endif // CONSTRUCTORJSON_H
