#ifndef TIPOGRAFO_H
#define TIPOGRAFO_H

using namespace std;

#include "Grafo.h"
#include "GrafoUML.h"

class TipoGrafo
{
public:
	TipoGrafo();
	~TipoGrafo();

private:
	
};

TipoGrafo::TipoGrafo()
{
	cout << "Se creo un TipoGrafo\n";
}

TipoGrafo::~TipoGrafo()
{
	cout << "Se elimino un TipoGrafo\n";
}
#endif // TIPOGRAFO_H
