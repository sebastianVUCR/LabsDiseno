#ifndef PAQUETEUML_H
#define PAQUETEUML_H

#include <iostream>
using namespace std;

class PaqueteUML
{
    public:
        PaqueteUML() {}
        virtual ~PaqueteUML() {}

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Geticono() { return icono; }
        void Seticono(string val) { icono = val; }
        string Gettipo() { return tipo; }
        void Settipo(string val) { tipo = val; }

        void cortar()
        {
            cout<<""<<endl;
        }
        void pegar()
        {
            cout<<""<<endl;
        }
        void eliminar()
        {
            cout<<""<<endl;
        }
        void reducir()
        {
            cout<<""<<endl;
        }
        void dibujar()
        {
            cout<<""<<endl;
        }

        PaqueteUML* seleccionar()
        {
            return this;//??????????????????????????????
        }




    protected:

    private:
        string nombre;
        string icono;
        string tipo;
};

#endif // PAQUETEUML_H
