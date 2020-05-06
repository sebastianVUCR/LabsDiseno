#ifndef EDITORGRAFO_H
#define EDITORGRAFO_H

#include "Grafo.h"

/* REPRESENTA UN EDITOR GENÉRICO DE GRAFOS */
template<typename T>
class EditorGrafo
{
public:
	EditorGrafo(Grafo<T> ntg);
	~EditorGrafo();

private:
	Grafo<T> tg;
};

template<typename T>
EditorGrafo<T>::EditorGrafo(Grafo<T> ntg) : tg(ntg)
{
	
}

template<typename T>
EditorGrafo<T>::~EditorGrafo()
{

}
#endif // EDITORGRAFO_H
