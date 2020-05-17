#pragma once

using namespace std;

/* REPRESENTA UN NODO GENÉRICO DE GRAFO GENÉRICO */
class Nodo
{
public:
	Nodo();
	Nodo(string nombre, pair<int, int> dimensiones, pair<int, int> ubicacion);
	~Nodo();

	string getNombre() { return nombre; }
	void setNombre(string nombre) { this->nombre = nombre; }
	string getTipo() { return nombre; }
	void setTipo(string tipo) { this->tipo = tipo; }

	pair<int, int> getDimensiones() { return dimensiones; }
	void setDimensiones(pair<int, int> dimensiones) { this->dimensiones = dimensiones; }
	pair<int, int> getUbicacion() { return ubicacion; }
	void setUbicacion(pair<int, int> ubicacion) { this->ubicacion = ubicacion; }

private:
	string nombre;
	string tipo;
	pair<int, int> dimensiones;
	pair<int, int> ubicacion;
};

Nodo::Nodo() 
{
	cout << "Se creo un Nodo\n";
	nombre = "";
}

Nodo::Nodo(string nombre, pair<int, int> dimensiones, pair<int, int> ubicacion) :nombre{ nombre }, dimensiones { dimensiones }, ubicacion{ ubicacion }
{
	cout << "Se creo un Nodo llamado " << nombre << endl;
}

Nodo::~Nodo()
{
	cout << "Se elimino un Nodo\n";
}
