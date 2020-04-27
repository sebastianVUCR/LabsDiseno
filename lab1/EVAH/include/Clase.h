#ifndef CLASE_H
#define CLASE_H

#include <PaqueteUML.h>


class Clase : public PaqueteUML
{
    public:
        Clase() {}
        virtual ~Clase() {}

    protected:

    private:
        vector<string>atributos;
};

#endif // CLASE_H
