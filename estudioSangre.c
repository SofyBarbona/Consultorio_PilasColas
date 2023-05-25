#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudioSangre.h"

struct EstudioSangreEst{
    float neutrofilos;
    float basofilos;
    float eosinofilos;
};

//PRE:
//POST:
EstudioSangre crearEstudioSangre(){
    EstudioSangre estS = malloc(sizeof(struct EstudioSangreEst));

    printf("Ingrese el porcentaje de neutrofilos en sangre:");
    scanf("%f",&estS->neutrofilos);

    printf("Ingrese el porcentaje de basofilos en sangre:");
    scanf("%f",&estS->basofilos);

    printf("Ingrese el porcentaje de eosinofilos en sangre:");
    scanf("%f",&estS->eosinofilos);

    return estS;
}
//PRE:
//POST:
void destruirEstudioSangre(EstudioSangre estS){
    free(estS);
}
//PRE:
//POST:
void mostrarEstudioSangre(EstudioSangre estS){
    printf("La cantidad de neutrofilos es: %f\n",estS->neutrofilos);
    printf("La cantidad de basofilos es: %f\n",estS->basofilos);
    printf("La cantidad de eosinofilos es: %f\n",estS->eosinofilos);
}
//PRE:
//POST:
//getters y setters
