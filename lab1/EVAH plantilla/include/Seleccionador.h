#ifndef SELECCIONADOR_H
#define SELECCIONADOR_H

#include "ObjetoGenericoUML.h"

class Seleccionador
{
    public:
        Seleccionador() {}
        virtual ~Seleccionador() {}

    protected:

    private:
        vector<ObjetoGenericoUML> seleccionados;
        string icono;
};

#endif // SELECCIONADOR_H
