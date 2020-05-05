#ifndef DIAGRAMA_H
#define DIAGRAMA_H

#include"ObjetoGenericoUML.h"
class Clase;

class Diagrama : public ObjetoGenericoUML
{
public:
    using ObjetoGenericoUML::ObjetoGenericoUML;
    virtual ~Diagrama() {}

    vector<Clase*> Getclases() { return clases; }
    void Setclases(vector<Clase*> val) { clases = val; }

    //indica que el diagrama esta compuesto por otro objeto uml
    void conectar(ObjetoGenericoUML* conexion)
    {
        cout << "El objeto " << conexion->Getnombre() << " ahora esta en el diagrama " << this->Getnombre() << endl;
    }

protected:

private:
    vector<Clase*> clases;
};

#endif // DIAGRAMA_H
