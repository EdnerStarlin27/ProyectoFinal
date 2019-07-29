#ifndef MI_LIBRERIA_H

typedef struct
{
    char titulo[50];
    char genero[50];
    int clasif;

}Peliculas;

typedef struct
{
    char nombre[50];
    char asiento[50];

}Comprador;

int buscar_nombre(char [], Peliculas peli[]);
int buscar_genero();
int buscar_clasificacion();
#endif // MI_LIBRERIA_H
