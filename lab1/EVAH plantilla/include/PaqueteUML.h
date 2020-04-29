#ifndef PAQUETEUML_H
#define PAQUETEUML_H


#include "ObjetoGenericoUML.h"

class ObjectoGenericoUML;
class Diagrama;


class PaqueteUML : public ObjetoGenericoUML<PaqueteUML>
{
    public:

        using ObjetoGenericoUML::ObjetoGenericoUML;

        virtual ~PaqueteUML() {}

        vector<Diagrama*> getDiagramas() { return diagramas; }
        void setDiagramas(vector<Diagrama*> val) { diagramas = val; }

        //indica que un diagrama esta adentro de un paquete
        void conectar(ObjetoGenericoUML* conexion)
        {
            cout << "El diagrama "<<this->Getnombre()<<" ahora esta en el paquete "<< conexion->Getnombre()<<endl;
        }

    protected:

    private:
        vector<Diagrama*> diagramas;

};

#endif // PAQUETEUML_H
