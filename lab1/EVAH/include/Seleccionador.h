#ifndef SELECCIONADOR_H
#define SELECCIONADOR_H

#include "PaqueteUML.h"

class Seleccionador
{
    public:
        Seleccionador() {}
        virtual ~Seleccionador() {}

    protected:

    private:
        vector<PaqueteUML> seleccionados;
        string icono;
};

#endif // SELECCIONADOR_H
