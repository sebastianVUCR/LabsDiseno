#ifndef CSV_SAVER_H
#define CSV_SAVER_H

#include "Grafo.h"
#include "GrafoSaver.h"

/* REPRESENTA UN GUARDADOR CSV DE GRAFO */
template<typename T>
class CSV_Saver : public GrafoSaver
{
public:
	CSV_Saver(Grafo<T>& g);
	virtual ~CSV_Saver();
};

template<typename T>
CSV_Saver<T>::CSV_Saver(Grafo<T>& g) : GrafoSaver(g)
{

}

template<typename T>
CSV_Saver<T>::~CSV_Saver()
{

}

#endif // CSV_SAVER_H
