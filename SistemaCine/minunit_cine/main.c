#include "minunits.h"
#include "../milibreria.h"
Peliculas pelis[] = {{"POMS", 1}, {"ANNABELLE COMES HOME", 3},{"SPIDER-MAN:FAR FROM HOME",2},{"TOY STORY 4",4}};
Peliculas genero[]= {{"Comedia",1},{"Terror",3},{"Accion",2},{"Animacion",4}};
Peliculas clasif[]= {{"R//16",1},{"R//18",3},{"R//13",2},{"R//8",4}};
MU_TEST(test_buscar_nombre)
{
    mu_assert_int_eq(-1,buscar_nombre("TOY STORY 4",pelis));
    mu_assert_int_eq(-1,buscar_nombre("SPIDER-MAN:FAR FROM HOME",pelis));
    mu_assert_int_eq(-1,buscar_nombre("POMS",pelis));
    mu_assert_int_eq(-1,buscar_nombre("ANNABELLE COMES HOME",pelis));

}
MU_TEST(test_buscar_genero)
{
    mu_assert_int_eq(-1,buscar_genero("Comedia",genero));
    mu_assert_int_eq(-1,buscar_genero("Terror",genero));
    mu_assert_int_eq(-1,buscar_genero("Accion",genero));
    mu_assert_int_eq(-1,buscar_genero("Animacion",genero));
}
MU_TEST(test_buscar_clasificacion)
{
    mu_assert_double_eq(-1,buscar_clasificacion("R//16",clasif));
    mu_assert_double_eq(-1,buscar_clasificacion("R//18",clasif));
    mu_assert_double_eq(-1,buscar_clasificacion("R//13",clasif));
    mu_assert_double_eq(-1,buscar_clasificacion("R//8",clasif));
}
int main(int argc, char *argv[])
{
    MU_RUN_TEST(test_buscar_nombre);
    MU_RUN_TEST(test_buscar_genero);
    MU_RUN_TEST(test_buscar_clasificacion);
    MU_REPORT();
    return 0;
}

