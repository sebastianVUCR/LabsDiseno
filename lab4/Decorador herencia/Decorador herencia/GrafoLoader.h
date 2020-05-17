#ifndef GRAFOLOADER_H
#define GRAFOLOADER_H

#include <string>

using namespace std;

class GrafoUML;

/* REPRESENTA UN CARGADOR GENÉRICO DE GRAFO */
class GrafoLoader
{
public:

	GrafoLoader();
	virtual GrafoUML Load(string nombreArchivo)=0;
	virtual ~GrafoLoader();
};

GrafoLoader::GrafoLoader()
{

}


GrafoLoader::~GrafoLoader()
{

}
#endif // GRAFOLOADER_H
