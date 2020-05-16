#ifndef EDITORGRAFO_H
#define EDITORGRAFO_H

#include "TipoGrafo.h"

/* REPRESENTA UN EDITOR GENÉRICO DE GRAFOS */
class EditorGrafo
{
public:
	EditorGrafo(TipoGrafo& ntg);
	~EditorGrafo();

private:
	TipoGrafo& tg;
};

EditorGrafo::EditorGrafo(TipoGrafo& ntg) : tg(ntg)
{

}

EditorGrafo::~EditorGrafo()
{

}
#endif // EDITORGRAFO_H
