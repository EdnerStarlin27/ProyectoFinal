#include "minunits.h"
#include "../milibreria.h"
struct  Peliculas
{
    char idioma[50];
    char titulo[50];
    char genero[50];
    int clasif;
    char sala[3];
    int duracion;
    float precio;
    Horario Horarios;

};
MU_TEST(test_buscar_numero)
{
    mu_assert_int_eq(-1,);
}

int main(int argc, char *argv[])
{
    MU_RUN_TEST(test_buscar_numero);
    MU_REPORT();
    return 0;
}

