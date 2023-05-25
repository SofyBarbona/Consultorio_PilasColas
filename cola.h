//axiomas
//

#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

struct ColaEst;
typedef struct ColaEst* Cola;

struct NodoEst;
typedef struct NodoEst* Nodo;

//PRE:
//POST:
Cola crearCola(int tamD);
//PRE:
//POST:
Nodo crearNodo(Cola cola, void* item, Nodo prox);
//PRE:
//POST:
void destruirCola(Cola cola);
//PRE:
//POST:
void encolar(Cola cola, void* item);
//PRE:
//POST:
void desencolar(Cola cola, void* reesp);
//PRE:
//POST:
int siColaVacia(Cola cola);
//PRE:
//POST:
int getTamanioCola(Cola cola);
//PRE:
//POST:
void* getElementoCola(Cola cola, int pos);

#endif // COLA_H_INCLUDED
