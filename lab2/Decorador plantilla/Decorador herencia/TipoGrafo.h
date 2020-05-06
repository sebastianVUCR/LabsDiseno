#ifndef TIPOGRAFO_H
#define TIPOGRAFO_H

using namespace std;

template <typename T>
class TipoGrafo
{
public:
	TipoGrafo();
	TipoGrafo(T t);
	~TipoGrafo();

private:
	T tipo;
};

template<typename T>
TipoGrafo<T>::TipoGrafo()
{
	cout << "Se creo un TipoGrafo\n";
}

template<typename T>
TipoGrafo<T>::TipoGrafo(T t) : tipo{t}
{
	cout << "Se creo un TipoGrafo " << t.getTIPO() << endl;
}

template<typename T>
TipoGrafo<T>::~TipoGrafo()
{
	cout << "Se elimino un TipoGrafo " << tipo.getTIPO() << endl;
}
#endif // TIPOGRAFO_H
