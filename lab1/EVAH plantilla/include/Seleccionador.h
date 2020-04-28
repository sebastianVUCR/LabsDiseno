#ifndef SELECCIONADOR_H
#define SELECCIONADOR_H

class ND_UML;

class Seleccionador
{
    public:
        Seleccionador() {}
        virtual ~Seleccionador() {}

    protected:

    private:
        vector<ND_UML> seleccionados;
        string icono;
};

#endif // SELECCIONADOR_H
