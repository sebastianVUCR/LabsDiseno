#ifndef ND_BPMN_H
#define ND_BPMN_H

#include "Nodo.h"

/* REPRESENTA UN NODO BPMN DE GRAFOBPMN */
class ND_BPMN : public Nodo
{
public:
	ND_BPMN();
	virtual ~ND_BPMN();
};

ND_BPMN::ND_BPMN : Nodo()
{

}

ND_BPMN::~ND_BPMN()
{

}
#endif // ND_BPMN_H
