//axiomas
//
#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

struct PilaEst;
typedef struct PilaEst* Pila;

struct NodoEst;
typedef struct NodoEst* Nodo;

//PRE:
//POST:
Pila crearPila(int tamD);
//PRE:
//POST:
Nodo crearNodoP(Pila pila, void* item, Nodo prox);
//PRE:
//POST:
void apilar(Pila pila, void* item);
//PRE:
//POST:
void desapilar(Pila pila, void* reesp);
//PRE:
//POST:
void destruirPila(Pila pila);
//PRE:
//POST:
int siPilaVacia(Pila pila);
//PRE:
//POST:
int getTamanioPila(Pila pila);
//PRE:
//POST:
void* getElementoPila(Pila pila, int pos);
//PRE:
//POST:


#endif // PILA_H_INCLUDED
