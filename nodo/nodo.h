#ifndef __NODO__H__
#define __NODO__H__

struct Nodo;
typedef struct Nodo Nodo;

Nodo* crearNodo(int valor);
int obtenerValor(const Nodo* n);
void asignarValor(Nodo* n, int valor);
void destruirNodo(Nodo* n);

#endif
