#ifndef CLASE_H
#define CLASE_H

#include <ObjetoGenericoUML.h>
class Relacion;

class Clase : public ObjetoGenericoUML
{
    public:
        /*
        Clase(string nombre){this->Setnombre(nombre);}
        */
        using ObjetoGenericoUML::ObjetoGenericoUML;

        //crear una relacion entre dos clases, por ejemplo relacion de agregacion o composicion
        void crearRelacion(Clase* relacionada,int multiplicidad_inicial,int multiplicidad_inversa)
        {
            cout<<"Se creo una relacion entre la clase "<<this->Getnombre()<<" y la clase "<<relacionada->Getnombre()<<endl;
        }
        //borra una relacion entre dos clases
        void borrarRelacion(Clase* relacionada)
        {
            cout<<"Se borro una relacion entre la clase "<<this->Getnombre()<<" y la clase "<<relacionada->Getnombre()<<endl;
        }

        //agrega la relacion al vector para la clase que la crea
        void conectar(Relacion*)
        {
            cout<<"Se agrego una relacion a la lista de relaciones en la clase "<<this->Getnombre()<<endl;
        }
        void conectar(){}
        virtual ~Clase() {}

    protected:

    private:
        string atributos;
        string metodos;
};

#endif // CLASE_H
