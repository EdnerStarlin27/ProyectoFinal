#ifndef MI_LIBRERIA_H

typedef struct Peli
{
    char titulo[50];
    char genero[50];
    char clasif[50];
    float precio;

}Peliculas;


void menu();
int buscar_nombre();
int buscar_genero();
int buscar_clasificacion();
#endif // MI_LIBRERIA_H
