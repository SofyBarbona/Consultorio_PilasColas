//Axiomas
//
#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include "pila.h"
#include "estudioSangre.h"

struct PacienteEst;
typedef struct PacienteEst* Paciente;

//PRE
//POST
Paciente crearPacientePT();
//PRE
//POST
void agregarEstudioPaciente(Paciente pac, EstudioSangre est);
//PRE
//POST
void estudioRevisadoPaciente(Paciente pac, void* estR);
//PRE
//POST
void destruirPaciente(Paciente pac);
//PRE
//POST
void mostrarPaciente(Paciente pac);
//PRE
//POST
//getter y setter
Pila getPila(Paciente pac);

#endif // PACIENTE_H_INCLUDED
