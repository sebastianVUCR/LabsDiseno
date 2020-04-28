#ifndef PAQUETEUML_H
#define PAQUETEUML_H


#include "ObjetoGenericoUML.h"

class ObjectoGenericoUML;


class PaqueteUML : public ObjetoGenericoUML
{
    public:
        //PaqueteUML() {}
        using ObjetoGenericoUML::ObjetoGenericoUML;

        virtual ~PaqueteUML() {}

        vector<Diagrama*> Getdiagramas() { return diagramas; }
        void Setdiagramas(vector<Diagrama*> val) { diagramas = val; }

        //indica que un diagrama esta adentro de un paquete
        void conectar(Diagrama* diagrama_parametro)
        {
            cout << "El diagrama "<<this->Getnombre()<<" ahora esta en el paquete "<<diagrama_parametro->Getnombre()<<endl;
        }

    protected:

    private:
        vector<Diagrama*> diagramas;
};

#endif // PAQUETEUML_H
