#ifndef MI_LIBRERIA_H

typedef struct
{
    char titulo[50];
    char genero[50];
    int clasif;

}Peliculas;

int buscar_nombre();
int buscar_genero();
int buscar_clasificacion();
#endif // MI_LIBRERIA_H
