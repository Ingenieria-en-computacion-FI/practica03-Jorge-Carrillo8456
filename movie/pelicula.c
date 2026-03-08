#include "pelicula.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Pelicula* crearPelicula(const char* nombre, const char* genero) {
    Pelicula *p = (Pelicula*)malloc(sizeof(Pelicula));
    if (!p) return NULL;

    
    p->nombre = strdup(nombre);
    p->genero = strdup(genero);
    p->cantidadDirectores = 0;

    return p;
}
void cambiarGenero(Pelicula* p, const char* nuevoGenero) {
    if (!p || !nuevoGenero) return;
    free(p->genero);          
    p->genero = strdup(nuevoGenero); 
}

void agregarDirector(Pelicula* p, const char* director) {
    if (!p || p->cantidadDirectores >= 10 || !director) return;
    p->directores[p->cantidadDirectores] = strdup(director);
    p->cantidadDirectores++;
}

void imprimir(const Pelicula* p) {
    if (!p) return;
    printf("Pelicula: %s | Genero: %s\n", p->nombre, p->genero);
    printf("Directores (%d/10):\n", p->cantidadDirectores);
    for(int i = 0; i < p->cantidadDirectores; i++) {
        printf(" - %s\n", p->directores[i]);
    }
}
void destruir(Pelicula* p) {
    if (!p) return;
    free(p->nombre);
    free(p->genero);
    for(int i = 0; i < p->cantidadDirectores; i++) {
        free(p->directores[i]);
    }
    free(p);
}
