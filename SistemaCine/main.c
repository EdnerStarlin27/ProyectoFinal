#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"

int main()
{
    int j=0;
    int i=0,opcion,opcion2;
    int clasi_peli;
    char nom_peli[50],gen_peli[50];

    FILE *archivopeli;

    archivopeli=fopen("pelicula.txt","rt");

    Peliculas peli[4];

    /*for (i=0; i<4; i++)
    {
        printf("\nPelicula %d",i+1);

        fflush(stdin);
        printf("\nTitulo: ");
        gets(peli[i].titulo);

        printf("Idioma: ");
        gets(peli[i].idioma);

        printf("Genero: ");
        gets(peli[i].genero);

        printf("Clasificacion: R/");
        scanf("%d", &peli[i].clasif);

        printf("Duracion: ");
        scanf("%d", &peli[i].duracion);

        fflush(stdin);
        printf("Sala: ");
        gets(peli[i].sala);

        printf("Precio: ");
        scanf("%f", &peli[i].precio);

        printf("Horarios\n");

        for (j=0; j<3; j++)
        {
            printf("\nHora: ");
            scanf("%d", &peli[i].Horarios[j].hora);
            printf("Min: ");
            scanf("%d", &peli[i].Horarios[j].minut);
        }

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
         //fwrite(&peli,sizeof(Peliculas),1,archivopeli);
         fclose(archivopeli);
     }



    printf("Bienvenido a Cine PUCMM!!!\n");


    do
    {
        printf("\nMenu:\n");
        printf("\nSeleccione a continuacion una de las siguientes opciones\n");
        printf("\n1-Ver cartelera de peliculas\n");
        printf("2-Seleccionar pelicula\n");
        printf("3-Comprar comida\n");
        printf("4-Cuenta total\n");
        printf("5-Buscar Pelicula por Genero\n");
        printf("6-Buscar Pelicula por Nombre\n");
        printf("7-Buscar Pelicula por Clasificacion\n");
        printf("8-Salir\n");
        printf("\nDigite una opci%cn: ",162);
        scanf("%d", &opcion);

        system("CLS");

        switch(opcion)
        {
        case 1:
            printf("\nPeliculas en Cartelera\n");

            for (i=0; i<4; i++)
            {
                printf("\nPelicula %d\n",i+1);
                printf("\nTitulo: %s",peli[i].titulo);
                printf("\nIdioma: %s", peli[i].idioma);
                printf("\nGenero: %s",peli[i].genero);
                printf("\nClasificacion: R/%d",peli[i].clasif);
                printf("\nDuracion: %dmin", peli[i].duracion);
                printf("\nSala: %s", peli[i].sala);
                printf("\nPrecio: %f", peli[i].precio);
                printf("\nHorarios\n");

                for (j=0; j<3 ; j++)
                {
                    printf("%d:%d\t",peli[i].Horarios[j].hora, peli[i].Horarios[j].minut);
                }

                printf("\n");
            }

            system("Pause");

            break;
        case 2:

            printf("\nDigite el numero de la pelicula que desea ver: ");
            scanf("%d", &opcion2);
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
            printf("\nDigite el genero de la pelicula que desea buscar:\n");
            fflush(stdin);
            gets(gen_peli);

            int g = buscar_genero(gen_peli,peli);

            if (g==-1)
            {
                printf("\nEl genero de la pelicula que busca no esta en Cartelera.\n");
            }
            else
            {
                printf("\nTitulo: %s",peli[g].titulo);

                printf("\nGenero: %s",peli[g].genero);

                printf("\nClasificacion: R/%d\n",peli[g].clasif);
            }

            system("PAUSE");

            break;
        case 7:
            printf("\nDigite la clasificacion con que esta calificada la pelicula:\n");
            scanf("%d", &clasi_peli);

            int c = buscar_clasificacion(clasi_peli, peli);

            if (c==-1)
            {
                printf("\nLa pelicula que busca con esta clasificacion no esta en Cartelera.\n");
            }
            else
            {
                printf("\nTitulo: %s",peli[c].titulo);

                printf("\nGenero: %s",peli[c].genero);

                printf("\nClasificacion: R/%d\n",peli[c].clasif);
            }

            system("PAUSE");

            break;
        case 8:
            break;
        default:
            printf("Opcion no valida. Por favor, digite otra.\n");
        }

        system("CLS");

    }
    while (opcion!=8);

    return 0;
}
