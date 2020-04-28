#ifndef OBJETOGENERICOUML_H
#define OBJETOGENERICOUML_H

#include <iostream>
#include "ND_UML.h"
#include <typeinfo>

using namespace std;

class Relacion;

template <typename Self>
class ObjetoGenericoUML: ND_UML
{
    public:
        ObjetoGenericoUML(string nuevo_nombre)
        {
            this->Setnombre(nuevo_nombre);
        }
        virtual ~ObjetoGenericoUML() {}

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Geticono() { return icono; }
        void Seticono(string val) { icono = val; }
        string Gettipo() { return tipo; }
        void Settipo(string val) { tipo = val; }

        //corta un objeto grafico uml
        void cortar()
        {
            cout<<"El objeto "<<this->Getnombre() << " se corto" << endl;
        }
        //pega un objeto grafico uml
        void pegar()
        {
            cout<<"El objeto "<<this->Getnombre() << " se pego" << endl;
        }
        //elimina un objeto grafico uml
        void eliminar()
        {
            cout<<"El objeto "<<this->Getnombre() << " se elimino" << endl;
        }
        //reducir un objeto grafico uml
        void reducir()
        {
            cout<<"El objeto "<<this->Getnombre() << " se redujo" << endl;
        }
        //dibujar un objeto grafico uml
        void dibujar()
        {
            cout<<"El objeto "<<this->Getnombre() << " se dibujo" << endl;
        }

        ObjetoGenericoUML* seleccionar()
        {
            return nullptr;
        }

        template <typename T>
        void conectar(T* conexion) {
            if (typeid(conexion) == typeid(Relacion)) {
                cout << "La clase " << conexion->getClases().first << " se unio a" << conexion->getClases().second << endl;
            }
            else {
                cout << "El objeto " << this->Getnombre() << " se unio a " << conexion->Getnombre() << endl;
            }
        }

    protected:

    private:
        string nombre;
        string icono;
        string tipo;
};

#endif // ObjetoGenericoUML_H
