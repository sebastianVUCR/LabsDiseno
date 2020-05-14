#ifndef GRAFOLOADER_H
#define GRAFOLOADER_H

#include <string>

/* REPRESENTA UN CARGADOR GENÉRICO DE GRAFO */
class GrafoLoader
{
public:
	GrafoLoader();
	virtual ~GrafoLoader();

	static const std::string getTIPO() { return "Loader"; }

};

GrafoLoader::GrafoLoader()
{

}

GrafoLoader::~GrafoLoader()
{

}
#endif // GRAFOLOADER_H
