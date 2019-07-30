#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"
#define filas 9
#define columnas 9

int main()
{
    int j=0,i=0,opciont,num_peli;
    int clasi_peli;
    char nom_peli[50],gen_peli[50];
    char *butacas[filas][columnas];


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

        printf("Horario\n");

        printf("\nHora: ");
        scanf("%d", &peli[i].Horarios.hora);
        printf("Min: ");
        scanf("%d", &peli[i].Horarios.minut);

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


    FILE *archivocomida;

    archivocomida=fopen("comida.txt","rt");

    Comidas comida[7];

    /*for (j=0; j<7; j++)
    {
       fflush(stdin);
       printf("\nProducto %d: ",j+1);
       gets(comida[j].comida);

       printf("Precio: ");
       scanf("%f", &comida[j].precio_comida);
    }

    if(archivocomida==NULL)
    {
       printf("\nEl archivo no existia, por tanto se ha creado!\n");
       archivocomida=fopen("comida.txt","w");
       fclose(archivocomida);
    }

    archivocomida=fopen("comida.txt","r+t");

    if(!archivocomida==NULL)
    {
       fwrite(&comida,sizeof(Comidas),7,archivocomida);
       fclose(archivocomida);
    }*/

    if(archivocomida==NULL)
    {
        printf("\nEl archivo no existe!\n");
    }
    else
    {
        fread(&comida,sizeof(Comidas),7,archivocomida);
        //fwrite(&peli,sizeof(Peliculas),1,archivopeli);
        fclose(archivocomida);
    }


    printf("Bienvenido a Cine PUCMM!!!\n");


    do
    {
        printf("\nMenu:\n");
        printf("\nSeleccione a continuacion una de las siguientes opciones\n");
        printf("\n1-Cartelera\n");
        printf("2-Seleccionar pelicula\n");
        printf("3-Comprar Comida\n");
        printf("4-Buscar Pelicula por Nombre\n");
        printf("5-Buscar Pelicula por Genero\n");
        printf("6-Buscar Pelicula por Clasificacion\n");
        printf("7-Cuenta total\n");
        printf("8-Salir\n");
        printf("\nDigite una opci%cn: ",162);
        scanf("%d", &opciont);

        system("CLS");

        switch(opciont)
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
                printf("\nDuracion: %d min", peli[i].duracion);
                printf("\nSala: %s", peli[i].sala);
                printf("\nPrecio: %.2f", peli[i].precio);
                printf("\nHorarios\n");

                printf("%d:%d\n",peli[i].Horarios.hora, peli[i].Horarios.minut);
            }

            system("Pause");


            break;
        case 2:
            printf("Digite el numero de la pelicula que desea ver: \n");
            scanf("%d", &num_peli);
            if (num_peli > 4)
            {
                printf("El numero de la pelicula que ha seleccionado aun no esta en cartelera. \n");
                system("PAUSE");
            }else{
            seleccion_peli(num_peli);
            printf("\n Seleccionado con exito! \n");
            system("PAUSE");
            }
            break;
        case 3:

            for (j=0; j<7 ;j++)
            {
                printf("%d.%s",j+1,comida[j].comida);
                printf("\nPrecio: %.2f\n", comida[j].precio_comida);
                printf("\n");
            }

            system("PAUSE");

            break;
        case 4:
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
                printf("\nIdioma: %s", peli[t].idioma);
                printf("\nGenero: %s",peli[t].genero);
                printf("\nClasificacion: R/%d",peli[t].clasif);
                printf("\nDuracion: %dmin", peli[t].duracion);
                printf("\nSala: %s", peli[t].sala);
                printf("\nPrecio: %.2f", peli[t].precio);
                printf("\nHorarios\n");


                printf("%d:%d",peli[t].Horarios.hora, peli[t].Horarios.minut);

            }

            system("PAUSE");

            break;
        case 5:
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
                printf("\nIdioma: %s", peli[g].idioma);
                printf("\nGenero: %s",peli[g].genero);
                printf("\nClasificacion: R/%d",peli[g].clasif);
                printf("\nDuracion: %d min", peli[g].duracion);
                printf("\nSala: %s", peli[t].sala);
                printf("\nPrecio: %.2f", peli[g].precio);
                printf("\nHorarios\n");

                printf("%d:%d",peli[g].Horarios.hora, peli[g].Horarios.minut);

            }

            system("PAUSE");

            break;
        case 6:
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
                printf("\nIdioma: %s", peli[c].idioma);
                printf("\nGenero: %s",peli[c].genero);
                printf("\nClasificacion: R/%d",peli[c].clasif);
                printf("\nDuracion: %dmin", peli[c].duracion);
                printf("\nSala: %s", peli[c].sala);
                printf("\nPrecio: %.2f", peli[c].precio);
                printf("\nHorarios\n");

                printf("%d:%d",peli[c].Horarios.hora, peli[c].Horarios.minut);

            }

            system("PAUSE");

            break;
        case 7:

            break;
        case 8:
            break;
        default:
            printf("Opcion no valida. Por favor, digite otra.\n");
        }

        system("CLS");
    }
    while (opciont!=8);

    return 0;
}
