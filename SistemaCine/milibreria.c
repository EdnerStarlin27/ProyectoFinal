#include "milibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscar_nombre(char nom_peli[50], Peliculas peli[4])
{
    int i;

    for (i=0;i<4;i++)
    {
        if (strnicmp(peli[i].titulo,nom_peli,3)==0)
            return i;
    }

    return -1;
}

int buscar_genero(char gen_peli[50], Peliculas peli[4])
{
     int i;

    for (i=0;i<4;i++)
    {
        if (strnicmp(peli[i].genero,gen_peli,3)==0)
            return i;
    }

    return -1;
}

int buscar_clasificacion(int cal_peli, Peliculas peli[])
{
    int i;

    for (i=0;i<4;i++)
    {
        if (cal_peli == peli[i].clasif)
            return i;
    }

    return -1;
}


void seleccionar_pelicula(){
    Comprador comp[100];
int cant_tickets,num_peli,i;
printf("Cual es el numero de la pelicula que desea ver?\n");
scanf("%d",&num_peli);
printf("Cuantos tickets desea?\n");
scanf("%d",&cant_tickets);

    for (i=0;i<cant_tickets;i++)
    {
        printf("Cual es tu nombre?");
        scanf("%s",&comp[i].nombre);
        printf("Los asientos van desde el A1 hasta O25\n");
        printf("Cual asiento deseas?");
        scanf("%s,%s:",&comp[i].asiento);
    }
    if (comp[i].asiento==comp[i+1].asiento)
        {
            printf("Este asiento ha sido reservado\n");
        }
}
