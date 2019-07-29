#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"

int main()
{
    int i=0,opcion,num_peli;
    char nom_peli[50];
    float cnt_total;

    FILE *archivopeli;

    archivopeli=fopen("pelicula.txt","rt");

    Peliculas peli[4];

   /* for (i=0;i<4;i++)
    {
        printf("\nPelicula %d",i+1);
        fflush(stdin);
        printf("\nTitulo: ");
        gets(peli[i].titulo);
        printf("Genero: ");
        gets(peli[i].genero);
        printf("Clasificacion: R/");
        scanf("%d", &peli[i].clasif);
    }
    if(archivopeli==NULL)
    {
        printf("\nEl archivo no existia, por tanto se ha creado!\n");
        archivopeli=fopen("pelicula.txt","w");
        fclose(archivopeli);
    }
    archivopeli=fopen("pelicula.txt","r+t");
    if(!archivopeli==NULL)
    {
        fwrite(&peli,sizeof(Peliculas),4,archivopeli);
        fclose(archivopeli);
    }*/

    if(archivopeli==NULL)
    {
        printf("\nEl archivo no existe!\n");
    }
    else
    {
        fread(&peli,sizeof(Peliculas),4,archivopeli);
        fclose(archivopeli);
    }



    printf("Bienvenido a Cine PUCMM!!!\n");


    do
    {
        printf("\nMenu:\n");
        printf("\nSeleccione a continuacion una de las siguientes opciones\n");
        printf("\n1-Seleccionar pelicula\n");
        printf("2-Comprar comida\n");
        printf("3-Cuenta total\n");
        printf("4-Buscar Pelicula por Nombre\n");
        printf("5-Buscar Pelicula por Genero\n");
        printf("6-Salir\n");
        printf("\nDigite una opci%cn: ",162);
        scanf("%d", &opcion);

        system("CLS");

        switch(opcion)
        {
        case 1:
            printf("\nPeliculas en Cartelera\n");

            for (i=0;i<4;i++)
    {
        printf("\nPelicula %d",i+1);

        printf("\nTitulo: %s",peli[i].titulo);

        printf("\nGenero: %s",peli[i].genero);

        printf("\nClasificacion: R/%d\n",peli[i].clasif);
    }

    printf("Cual es el numero de la pelicula que desea ver?");
    scanf("%d", &num_peli);
    printf("%sCu%sntas personas le acompa%san?",168,160,164);

    system("Pause");

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            printf("\nDigite el titulo de la pelicula que desea buscar:\n");
            fflush(stdin);
            gets(nom_peli);

            int t;
            t = buscar_nombre(nom_peli, peli);

            if (t==-1)
            {

                printf("\nLa pelicula que busca no esta en Cartelera.\n");

            }
            else
            {
                printf("\nTitulo: %s",peli[t].titulo);

                printf("\nGenero: %s",peli[t].genero);

                printf("\nClasificacion: R/%d\n",peli[t].clasif);
            }

            system("PAUSE");

            break;
        case 6:
            break;
        case 7:
            break;
        default:
            printf("Opcion no valida. Por favor, digite otra.\n");
        }

        system("CLS");

    }
    while (opcion!=7);

    return 0;
}
