#ifndef DIAGRAMA_H
#define DIAGRAMA_H

#include"ObjetoGenericoUML.h"
#include "PaqueteUML.h"
class Clase;

class Diagrama: public ObjetoGenericoUML<Diagrama>
{
    public:
        using ObjetoGenericoUML::ObjetoGenericoUML;
        virtual ~Diagrama() {}

        vector<Clase*> Getclases() { return clases; }
        void Setclases(vector<Clase*> val) { clases = val; }

        //indica que el diagrama esta compuesto por otro objeto uml

    protected:

    private:
        vector<Clase*> clases;
};

#endif // DIAGRAMA_H
