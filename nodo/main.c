#include "nodo.h"
#include <stdio.h>

int main() {
    Nodo *miNodo = NULL;

    miNodo = crearNodo(100);
    
    printf("Valor inicial del nodo: %d\n", obtenerValor(miNodo));
    
    asignarValor(miNodo, 200);
    printf("Nuevo valor del nodo: %d\n", obtenerValor(miNodo));

    destruirNodo(miNodo);
    miNodo = NULL;

    (miNodo == NULL) ? printf("Nodo eliminado con exito.\n") : printf("Error.\n");

    return 0;
}
