#ifndef DIAGRAMA_H
#define DIAGRAMA_H

#include"ObjetoGenericoUML.h"
class Clase;

class Diagrama: public ObjetoGenericoUML
{
    public:
        using ObjetoGenericoUML::ObjetoGenericoUML;
        //Diagrama() {}
        virtual ~Diagrama() {}

        vector<Clase*> Getclases() { return clases; }
        void Setclases(vector<Clase*> val) { clases = val; }

        //indica que el diagrama esta compuesto por otro objeto uml
        void conectar(ObjetoGenericoUML* mi_clase)
        {
            cout <<"el objeto " << mi_clase->Getnombre()<<" ahora esta en el diagrama " << this->Getnombre()<<endl;
        }

    protected:

    private:
        vector<Clase*> clases;
};

#endif // DIAGRAMA_H
