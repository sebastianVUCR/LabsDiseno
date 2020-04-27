#ifndef DIAGRAMA_H
#define DIAGRAMA_H

#include"PaqueteUML.h"

class Diagrama: public PaqueteUML
{
    public:
        Diagrama() {}
        virtual ~Diagrama() {}

        vector<Clase*> Getclases() { return clases; }
        void Setclases(vector<Clase*> val) { clases = val; }

    protected:

    private:
        vector<Clase*> clases;
};

#endif // DIAGRAMA_H
