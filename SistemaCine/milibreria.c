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

    for (i=0; i<4; i++)
    {
        if (cal_peli == peli[i].clasif)
            return i;
    }

    return -1;
}
