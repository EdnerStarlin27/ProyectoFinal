#include "milibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscar_nombre(char nom_peli[50], Peliculas peli[4])
{
    int i;

    for (i=0;i<4;i++)
    {
        if (strcmpi(peli[i].titulo,nom_peli)==0)
            return i;
    }

    return -1;
}
