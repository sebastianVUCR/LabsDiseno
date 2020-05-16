#ifndef TIPOGRAFO_H
#define TIPOGRAFO_H

using namespace std;


class TipoGrafo
{
public:
	TipoGrafo();
	~TipoGrafo();

private:
	bool binario;
	string nombre;
	
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
