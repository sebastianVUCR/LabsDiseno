#ifndef CSV_SAVER_H
#define CSV_SAVER_H

#include "Grafo.h"
#include "GrafoSaver.h"

/* REPRESENTA UN GUARDADOR CSV DE GRAFO */
class CSV_Saver : public GrafoSaver
{
public:
	CSV_Saver(Grafo& g);
	virtual ~CSV_Saver();
};

CSV_Saver::CSV_Saver(Grafo& g) : GrafoSaver(g)
{

}

CSV_Saver::~CSV_Saver()
{

}

#endif // CSV_SAVER_H
