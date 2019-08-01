#ifndef MI_LIBRERIA_H
#define filas 5
#define columnas 8
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
void mostrar_asientos(char * butacas[filas][columnas],int cantidad_asientos);
void seleccion_peli(int num_peli);
void comprar_comida();
void pagar();


#endif // MI_LIBRERIA_H
