#ifndef PAQUETEUML_H
#define PAQUETEUML_H


#include "ObjetoGenericoUML.h"
#include "Diagrama.h"

class ObjectoGenericoUML;


class PaqueteUML : public ObjetoGenericoUML<Diagrama>
{
    public:
        using ObjetoGenericoUML::ObjetoGenericoUML;

        virtual ~PaqueteUML() {}

        vector<Diagrama> getDiagramas() { return diagramas; }
        void setDiagramas(vector<Diagrama> val) { diagramas = val; }

        //indica que un diagrama esta adentro de un paquete

    protected:

    private:
        vector<Diagrama> diagramas;
};

#endif // PAQUETEUML_H
