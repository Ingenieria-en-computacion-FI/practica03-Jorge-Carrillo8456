#include "nodo.h"
#include <stdlib.h>
#include <stdio.h>

struct Nodo {
    int valor;
};

Nodo* crearNodo(int valor) {
    Nodo *n = (Nodo*)malloc(sizeof(Nodo));
    if (n != NULL) {
        n->valor = valor;
    }
    return n;
}

int obtenerValor(const Nodo* n) {
    if (!n) return 0;
    return n->valor;
}

void asignarValor(Nodo* n, int valor) {
    if (!n) return;
    n->valor = valor;
}

void destruirNodo(Nodo* n) {
    if (!n) return;
    free(n);
}
