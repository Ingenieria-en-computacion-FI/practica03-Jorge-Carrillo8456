#include "pelicula.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Pelicula *p = crearPelicula("Inception", "Sci-Fi");

    cambiarGenero(p, "Ciencia Ficcion");

    agregarDirector(p, "Christopher Nolan");
    
    imprimir(p);

    destruir(p);
    p = NULL;

    (p == NULL) ? printf("\nMemoria de pelicula y directores liberada.\n") : printf("\nFuga de memoria.\n");

    return 0;
}
