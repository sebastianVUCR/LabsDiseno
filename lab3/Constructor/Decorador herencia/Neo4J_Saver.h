#ifndef NEO4J_SAVER_H
#define NEO4J_SAVER_H

#include "Grafo.h"
#include "GrafoSaver.h"

/* REPRESENTA UN GUARDADOR BASADO EN Neo4J DE GRAFO */
class Neo4J_Saver : public GrafoSaver
{
public:
	Neo4J_Saver(Grafo& g);
	~Neo4J_Saver();
};

Neo4J_Saver::Neo4J_Saver(Grafo& g) : GrafoSaver(g)
{

}

Neo4J_Saver::~Neo4J_Saver()
{

}
#endif // NEO4J_SAVER_H
