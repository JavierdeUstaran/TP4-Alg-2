
#ifndef ARCHIVO_H_
#define ARCHIVO_H_

#include <fstream>
#include <iostream>
#include <sstream>
#include "Lista_provisoria.h"
#include "LIsta_pelicula/Lista_pelicula.h"
#include "Pelicula.h"

using namespace std;

const string ARCHIVO_VISTAS = "peliculas_vistas.txt";
const string ARCHIVO_NO_VISTAS = "peliculas_no_vistas.txt";

class Archivo {

private:

	ifstream archivo_vistas;
	ifstream archivo_no_vistas;
	Pelicula pelicula;

public:

	Archivo();
	void cargar_vistas(Lista_pelicula &);
	void cargar_no_vistas(Lista_pelicula &);
	~Archivo();
};

#endif /* ARCHIVO_H_ */
