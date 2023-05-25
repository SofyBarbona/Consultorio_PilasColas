#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"
#include "estudioSangre.h"

struct PacienteEst{
    char nombre[30];
    int dni;
    Pila estudiosSangre;
};

//PRE
//POST
Paciente crearPacientePT(){
    Paciente pac = malloc(sizeof(struct PacienteEst));

    printf("\nIngrese el nombre del paciente: ");
    fflush(stdin);
    gets(pac->nombre);

    printf("Ingrese el dni ");
    scanf("%d",&pac->dni);

    pac->estudiosSangre = crearPila(sizeof(EstudioSangre));

    return pac;
}
//PRE
//POST
void agregarEstudioPaciente(Paciente pac, EstudioSangre est){
    apilar(pac->estudiosSangre,&est);
}
//PRE
//POST
void estudioRevisadoPaciente(Paciente pac, void* estR){
    desapilar(pac->estudiosSangre,estR);
}
//PRE
//POST
void destruirPaciente(Paciente pac){
    free(pac);
}
//PRE
//POST
void mostrarPaciente(Paciente pac){
    printf("\nEl nombre del paciente es: %s\n",pac->nombre);
    printf("El dni es: %d\n",pac->dni);
}
//PRE
//POST
//getter y setter
Pila getPila(Paciente pac){
    return pac->estudiosSangre;
}
