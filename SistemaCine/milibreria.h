#ifndef MI_LIBRERIA_H

typedef struct
{
    int hora,minut;

}Horario;

typedef struct
{
    char idioma[50];
    char titulo[50];
    char genero[50];
    int clasif;
    char sala[3];
    int duracion;
    float precio;
    Horario Horarios;

}Peliculas;

typedef struct
{
    char comida[50];
    float precio_comida;

}Comidas;

typedef struct
{
    char nombre[50];

}Comprador;

int buscar_nombre(char [], Peliculas peli[]);
int buscar_genero(char [], Peliculas peli[]);
int buscar_clasificacion(int, Peliculas peli[]);

#endif // MI_LIBRERIA_H
