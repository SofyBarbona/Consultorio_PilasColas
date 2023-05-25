#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

struct PilaEst{
    Nodo inicio;
    int tam;
    int tamanioDato;
};

struct NodoEst{
    void* item;
    Nodo proximo;
};

//PRE:
//POST:
Pila crearPila(int tamD){
    Pila pila = malloc(sizeof(struct PilaEst));

    pila->inicio = NULL;
    pila->tam = 0;
    pila->tamanioDato = tamD;

    return pila;
}
//PRE:
//POST:
Nodo crearNodoP(Pila pila, void* item, Nodo prox){
    Nodo nodo = malloc(sizeof(struct NodoEst));
    nodo->item = malloc(sizeof(pila->tamanioDato));

    memcpy(nodo->item,item,pila->tamanioDato);
    nodo->proximo = prox;

    return nodo;
}
//PRE:
//POST:
void apilar(Pila pila, void* item){
    Nodo nuevoNodo;

    if(pila->tam == 0){
        nuevoNodo = crearNodoP(pila,item,pila->inicio);
        pila->inicio = nuevoNodo;
    }else{
        Nodo aux = pila->inicio;
        for(int i=0;i<pila->tam-1;i++){
            aux = aux->proximo;
        }
        nuevoNodo = crearNodoP(pila,item,aux->proximo);
        aux->proximo = nuevoNodo;
    }
        pila->tam++;
}
//PRE:
//POST:
void desapilar(Pila pila, void* reesp){
    Nodo aux = pila->inicio;

    if(pila->inicio == NULL)
        return NULL;

    for(int i=0;i<pila->tam-2;i++){
        aux = aux->proximo;
    }

    if(pila->tam == 1){
        memcpy(reesp,pila->inicio->item,pila->tamanioDato);
        pila->inicio = NULL;
    }else{
        memcpy(reesp,aux->proximo->item,pila->tamanioDato);
        aux->proximo = NULL;
    }
    pila->tam--;
}
//PRE:
//POST:
void destruirPila(Pila pila);
//PRE:
//POST:
int siPilaVacia(Pila pila){
    printf("\n%d",(pila->inicio==NULL));
    return (pila->inicio == NULL);
}
//PRE:
//POST:
int getTamanioPila(Pila pila){
    return pila->tam;
}
//PRE:
//POST:
void* getElementoPila(Pila pila, int pos){
    Nodo aux = pila->inicio;

    for(int i=0;i<pos;i++){
        aux = aux->proximo;
    }

    return aux->item;
}
