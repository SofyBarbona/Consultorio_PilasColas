#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"

struct ColaEst{
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
Cola crearCola(int tamD){
    Cola cola = malloc(sizeof(struct ColaEst));

   // if(cola==NULL)
   //     return NULL;

    cola->inicio = NULL;
    cola->tam = 0;
    cola->tamanioDato = tamD;

    return cola;
}
//PRE:
//POST:
Nodo crearNodo(Cola cola, void* item, Nodo prox){
    Nodo nodo = malloc(sizeof(struct NodoEst));
    nodo->item = malloc(sizeof(cola->tamanioDato));

   // if(NODO==NULL)
   //    return NULL;

    memcpy(nodo->item,item,cola->tamanioDato);
    nodo->proximo = prox;

    return nodo;
}
//PRE:
//POST:
void destruirCola(Cola cola);
//PRE:
//POST:
void encolar(Cola cola, void* item){
    Nodo nuevoNodo;

    if(cola->tam == 0){
        nuevoNodo = crearNodo(cola, item, cola->inicio);
        cola->inicio = nuevoNodo;
    }else{
        Nodo aux = cola->inicio;
        for(int i=0;i<cola->tam-1;i++){
            aux = aux->proximo;
        }
        nuevoNodo = crearNodo(cola,item,aux->proximo);
        aux->proximo = nuevoNodo;
    }
    cola->tam++;
}
//PRE:
//POST:
void desencolar(Cola cola, void* reesp){
    Nodo aux = cola->inicio;

    //cola no puede estar vacia
    //cola tiene un solo nodo

    //if(reesp != NULL)

    memcpy(reesp,aux->item,cola->tamanioDato);
    cola->inicio = aux->proximo;
    free(aux);
    cola->tam--;
}
//PRE:
//POST:
int siColaVacia(Cola cola){
    printf("\n%d",(cola->inicio==NULL));
    return (cola->inicio == NULL);
}
//PRE:
//POST:
int getTamanioCola(Cola cola){
    return cola->tam;
}
//PRE:
//POST:
void* getElementoCola(Cola cola, int pos){
    Nodo aux = cola->inicio;

    for(int i=0;i<pos;i++){
        aux = aux->proximo;
    }
    return aux->item;
}
