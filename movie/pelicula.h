#ifndef __PELICULA__H__
#define __PELICULA__H__

struct Pelicula {
    char *nombre;
    char *genero;
    char *directores[10];
    int cantidadDirectores;
};
typedef struct Pelicula Pelicula;

Pelicula* crearPelicula(const char* nombre, const char* genero);
void imprimir(const Pelicula* p);
void cambiarGenero(Pelicula* p, const char* nuevoGenero);
void agregarDirector(Pelicula* p, const char* director);
void destruir(Pelicula* p);

#endif
