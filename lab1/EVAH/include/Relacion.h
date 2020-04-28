#ifndef RELACION_H
#define RELACION_H

#include"Clase.h"

class Clase;
class Relacion
{
    public:
        Relacion(Clase*,Clase*,int,int) {}
        virtual ~Relacion() {}

        string Gettipo() { return tipo; }
        void Settipo(string val) { tipo = val; }

    protected:

    private:
        string tipo = "hola";
        pair<Clase*,Clase*>clases;
        pair<int,int>multiplicidad;
};

#endif // RELACION_H
