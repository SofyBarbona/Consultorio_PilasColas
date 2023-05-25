/// En un consultorio medico hay una cola de pacientes y cada paciente tiene una pila de estudios.

#include <stdio.h>
#include <stdlib.h>
#include "consultorio.h"
#include "paciente.h"
#include "estudioSangre.h"
#include "cola.h"

int menu();
void respuesta(int opc, Consultorio cons);

int main(){
    int opcElegida = menu();

    Consultorio consultorio1 = crearConsultorio("Vitality Center","Cristian Castro 2021",42386764);
    mostrarConsultorio(consultorio1);

    respuesta(opcElegida,consultorio1);


    //EstudioSangre estudio1 = crearEstudioSangre(58.90,0.73,5.13,7.83,27.41,5.7);



    return 0;
}

int menu(){
    int rta;

    do{
        printf("\n---------------MENU------------------\n");
        printf("1- Ingrese paciente \n");
        printf("2- Ingrese estudio de sangre\n");
        printf("3- Estudio analizado\n");
        printf("4- Despachar paciente\n");
        printf("5- Cerrar programa\n");
        scanf("%d",&rta);
    }while(rta<= 0 || rta >5);

    return rta;
}
void respuesta(int opc, Consultorio cons){
    Paciente aux;
    do{
        switch(opc){
            case 1:{
                Paciente paciente = crearPacientePT();
                agregarPacienteConsultorio(cons,paciente);
                break;
            }
            case 2:{
                printf("\nIngrese el estudio del paciente: ");
                aux = *(Paciente*) getElementoCola(getCola(cons),0);
                mostrarPaciente(aux);
                EstudioSangre estudio = crearEstudioSangre();
                agregarEstudioPaciente(aux,estudio);
                break;
            }
            case 3:{
                void* analizado = (EstudioSangre*) malloc(sizeof(EstudioSangre));

                aux = *(Paciente*) getElementoCola(getCola(cons),0);
                estudioRevisadoPaciente(aux,analizado);

                printf("\nEl estudio revisado fue: ");
                mostrarEstudioSangre(*(EstudioSangre*)analizado);
                break;
            }
            case 4:{
                void* dato = (Paciente*) malloc(sizeof(Paciente));
                pacienteAtendido(cons,dato);
                printf("\nEl paciente atendido fue: ");
                mostrarPaciente(*(Paciente*)dato);
                break;
            }
            case 5:{
                printf("\n----------PROGRAMA FINALIZADO---------\n");
                break;
            }
        }
        opc = menu();
    }while(opc < 5);
}
