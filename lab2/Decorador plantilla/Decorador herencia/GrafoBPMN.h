#ifndef GRAFOBPMN_H
#define GRAFOBPMN_H

#include "Grafo.h"
#include "TipoGrafo.h"

#include <string>

/* REPRESENTA UN GRAFO NOTACIÓN BPMN */
class GrafoBPMN
{
public:
	GrafoBPMN();
	~GrafoBPMN();

	static const std::string getTIPO() { return "BPMN"; }
};

GrafoBPMN::GrafoBPMN()
{

}

GrafoBPMN::~GrafoBPMN()
{

}
#endif // GRAFOBPMN_H
