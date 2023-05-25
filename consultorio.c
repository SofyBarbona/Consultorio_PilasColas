#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "consultorio.h"

struct ConsultorioEst{
    char nombre[30];
    char direccion[30];
    int telefono;
    Cola pacientes;
};

//PRE:
//POST:
Consultorio crearConsultorio(char nom[], char dir[], int tel){
    Consultorio cons = malloc(sizeof(struct ConsultorioEst));

    strcpy(cons->nombre,nom);
    strcpy(cons->direccion,dir);
    cons->telefono = tel;

    cons->pacientes = crearCola(sizeof(Paciente));

    return cons;
}
//PRE:
//POST:
void destruirConsultorio(Consultorio cons){
    free(cons);
}
//PRE:
//POST:
void agregarPacienteConsultorio(Consultorio cons, Paciente pas){
    encolar(cons->pacientes,&pas);
}
//PRE:
//POST:
void pacienteAtendido(Consultorio cons, void* atendido){
    desencolar(cons->pacientes,atendido);
}
//PRE:
//POST:
void mostrarConsultorio(Consultorio cons){
    printf("\nEl nombre del consultorio es: %s\n",cons->nombre);
    printf("La direccion es: %s\n",cons->nombre);
    printf("El telefono es: %d\n",cons->telefono);
}
//PRE:
//POST:
//getter y setters
Cola getCola(Consultorio cons){
    return cons->pacientes;
}
