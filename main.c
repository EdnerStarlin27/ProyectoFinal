#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"

int main()
{
    printf("Bienvenido a Cine PUCMM!!!\n");
    {
    int opcion, cuenta,cantidad_personas;
    char caracter;

    do
    {
        printf("\nMenu:\n");
        printf("\nSeleccione a continuaci%cn una de las siguientes opciones\n",162);
        printf("1-Ingresar Datos del Comprador\n");
        printf("2-Buscar Pelicula por Nombre\n");
        printf("3-Seleccionar Pelicula y Asiento\n");
        printf("4-Compara comida\n");
        printf("5-Cuenta total\n");
        printf("6- Salir\n");
        printf("\nDigite una opci%cn: ",162);
        scanf("%d", &opcion);


        switch(opcion)
        {
        case 1:
            printf("Cuantas personas vienen con usted?");
            scanf("%d",cantidad_personas);
            struct comprador datos_comprador(cantidad_personas);
            for (int i = 0; i < cantidad_personas; ++i) {
printf("Introduzca su nombre: \n");
scanf("%s",datos_comprador[i].Nombre);
printf("Introduzca su apellido: \n");
scanf("%s",datos_comprador.Apellido);
}
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
            exit(-1);
            break;
        default:
            printf("Opcion no valida. Por favor, digite otra.\n");
            system("PAUSE");
        }

    }
    while (opcion>7 || opcion<1);

}
    return 0;
}
