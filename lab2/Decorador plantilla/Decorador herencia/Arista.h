#ifndef ARISTA_H
#define ARISTA_H

#include <string>

/* REPRESENTA UNA ARISTA GENÉRICA */
template<typename D, typename T>
class Arista
{
public: 
	Arista<D, T>();
	Arista<D, T>(string nombre);
	~Arista();

	void dibujar();
	void cortar();
	void eliminar();
	void reducir();
	void copiar();

	std::string getNombre() { return nombre; }
	void setNombre(std::string nombre) { this->nombre = nombre; }
	std::string getTipo() { return tipo; }
	void setTipo(std::string tipo) { this->tipo = tipo; }
	std::string getpeso() { return peso; }
	void setPeso(std::string peso) { this->peso = peso; }
	std::string getDescripcion() { return descripcion; }
	void setDescripcion(std::string descripcion) { this->descripcion = descripcion; }
	std::pair<int, int> getMultiplicidad() { return multiplicidad; }
	void setMultiplicidad(std::pair<int, int> multiplicidad) { this->multiplicidad = multiplicidad; }
	std::pair<Nodo*, Nodo*> getNodos() { return nodos; }
	void setNodos(std::pair<Nodo*, Nodo*> nodos) { this->nodos = nodos; }

private:
	std::string nombre;
	std::string tipo;
	std::string peso;
	std::string descripcion;
	std::pair<int, int> multiplicidad;
	std::pair<Nodo*, Nodo*> nodos;
};

template<typename D, typename T>
Arista<D, T>::Arista()
{
	std::cout << "Se creo una arista " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
Arista<D, T>::Arista(string nombre) : nombre{ nombre }
{
	std::cout << "Se creo la arista " << getNombre() << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
Arista<D, T>::~Arista()
{
	std::cout << "Se borro la arista " << nombre << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
void Arista<D, T>::dibujar()
{
	std::cout << "Se dibujo la arista " << getNombre() << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
void Arista<D, T>::cortar()
{
	std::cout << "Se corto la arista " << getNombre() << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
void Arista<D, T>::eliminar()
{
	std::cout << "Se elimino la arista " << getNombre() << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
void Arista<D, T>::reducir()
{
	std::cout << "Se redujo la arista " << getNombre() << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

template<typename D, typename T>
void Arista<D, T>::copiar()
{
	std::cout << "Se copio la arista " << getNombre() << " " << D::getDIRECCION() << " de tipo " << T::getTIPO() << endl;
}

#endif // ARISTA_H
