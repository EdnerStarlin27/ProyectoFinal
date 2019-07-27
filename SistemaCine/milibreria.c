#include "milibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu()
{
    int opcion;

    do
    {
        printf("\nMenu:\n");
        printf("\nSeleccione a continuacion una de las siguientes opciones\n");
        printf("\n1-Seleccionar pelicula\n");
        printf("2-Comprar comida\n");
        printf("3-Comprar Bebida\n");
        printf("4-Cuenta total\n");
        printf("5-Buscar Pelicula por Nombre\n");
        printf("6-Buscar Pelicula por Nombre\n");
        printf("7- Salir\n");
        printf("\nDigite una opci%cn: ",162);
        scanf("%d", &opcion);


        switch(opcion)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            break;
        case 7:
            break;
        default:
            printf("Opcion no valida. Por favor, digite otra.\n");
        }

    }
    while (opcion!=7);
}
