//Axiomas
//

#ifndef CONSULTORIO_H_INCLUDED
#define CONSULTORIO_H_INCLUDED
#include "cola.h"
#include "paciente.h"

struct ConsultorioEst;
typedef struct ConsultorioEst* Consultorio;

//PRE:
//POST:
Consultorio crearConsultorio(char nom[], char dir[], int tel);
//PRE:
//POST:
void destruirConsultorio(Consultorio cons);
//PRE:
//POST:
void agregarPacienteConsultorio(Consultorio cons, Paciente pas);
//PRE:
//POST:
void pacienteAtendido(Consultorio cons, void* atendido);
//PRE:
//POST:
void mostrarConsultorio(Consultorio cons);

//PRE:
//POST:
//getter y setters
Cola getCola(Consultorio cons);
#endif // CONSULTORIO_H_INCLUDED
