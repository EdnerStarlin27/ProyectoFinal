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
    Horario Horarios[3];

}Peliculas;

int buscar_nombre(char [], Peliculas peli[]);
int buscar_genero(char [], Peliculas peli[]);
int buscar_clasificacion(int, Peliculas peli[]);

#endif // MI_LIBRERIA_H
