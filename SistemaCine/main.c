#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"

int main()
{
    system("color f3");
    int j=0,i=0,opciont,num_peli;
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
        printf("\nMen%c:\n",163);
        printf("\nSeleccione a continuaci%cn una de las siguientes opciones\n",162);
        printf("\n1-Cartelera\n");
        printf("2-Comprar Comida\n");
        printf("3-Seleccionar Pel%ccula\n",161);
        printf("4-Buscar Pel%ccula por Nombre\n",161);
        printf("5-Buscar Pel%ccula por G%cnero\n",161,130);
        printf("6-Buscar Pel%ccula por Clasificaci%cn\n",161,162);
        printf("7-Cuenta total\n");
        printf("8-Salir\n");
        printf("\nDigite una opci%cn: ",162);
        scanf("%d", &opciont);

        system("CLS");

        switch(opciont)
        {
        case 1:

            printf("\nPel%cculas en Cartelera\n",161);

            for (i=0; i<4; i++)
            {
                printf("\nPel%ccula %d\n",161,i+1);
                printf("\nT%ctulo: %s",161,peli[i].titulo);
                printf("\nIdioma: %s", peli[i].idioma);
                printf("\nG%cnero: %s",130,peli[i].genero);
                printf("\nClasificaci%cn: R/%d",162,peli[i].clasif);
                printf("\nDuraci%cn: %d min",162, peli[i].duracion);
                printf("\nSala: %s", peli[i].sala);
                printf("\nPrecio: %.2f", peli[i].precio);
                printf("\nHorario\n");

                printf("%d:%d\n",peli[i].Horarios.hora, peli[i].Horarios.minut);
            }

            system("Pause");

            break;
        case 2:

            for (j=0; j<7 ; j++)
            {
                printf("%d.%s",j+1,comida[j].comida);
                printf("\nPrecio: %.2f\n", comida[j].precio_comida);
                printf("\n");
            }
            comprar_comida();

            system("PAUSE");
            break;
        case 3:
            printf("Digite el n%cmero de la pel%ccula que desea ver: \n",163,161);
            scanf("%d", &num_peli);
            if (num_peli > 4)
            {
                printf("El n%cmero de la pel%ccula que ha seleccionado a%cn no esta en cartelera. \n",163,161,163);
                system("PAUSE");
            }
            seleccion_peli(num_peli);
            printf("\n Seleccionado con %cxito! \n",130);
            system("PAUSE");
            break;
        case 4:
            printf("\nDigite el t%ctulo de la pel%ccula que desea buscar: \n",161,161);
            fflush(stdin);
            gets(nom_peli);

            int t;
            t = buscar_nombre(nom_peli, peli);

            if (t==-1)
            {
                printf("\nLa pel%ccula que busca no esta en Cartelera.\n",161);
            }
            else
            {
                printf("\nT%ctulo: %s",161,peli[t].titulo);
                printf("\nIdioma: %s", peli[t].idioma);
                printf("\nG%cnero: %s",130,peli[t].genero);
                printf("\nClasificaci%cn: R/%d",162,peli[t].clasif);
                printf("\nDuraci%cn: %d min",162, peli[t].duracion);
                printf("\nSala: %s", peli[t].sala);
                printf("\nPrecio: %.2f", peli[t].precio);
                printf("\nHorario\n");


                printf("%d:%d",peli[t].Horarios.hora, peli[t].Horarios.minut);

            }

            system("PAUSE");

            break;
        case 5:
            printf("\nDigite el g%cnero de la pel%ccula que desea buscar: \n",130,161);
            fflush(stdin);
            gets(gen_peli);

            int g = buscar_genero(gen_peli,peli);

            if (g==-1)
            {
                printf("\nEl g%cnero de la pel%ccula que busca no esta disponible por el momento.\n",130,161);
            }
            else
            {
                printf("\nT%ctulo: %s",161,peli[g].titulo);
                printf("\nIdioma: %s", peli[g].idioma);
                printf("\nG%cnero: %s",130,peli[g].genero);
                printf("\nClasificaci%cn: R/%d",162,peli[g].clasif);
                printf("\nDuraci%cn: %d min",162, peli[g].duracion);
                printf("\nSala: %s", peli[t].sala);
                printf("\nPrecio: %.2f", peli[g].precio);
                printf("\nHorario\n");

                printf("%d:%d",peli[g].Horarios.hora, peli[g].Horarios.minut);

            }

            system("PAUSE");

            break;
        case 6:
            printf("\nDigite la clasificaci%cn de la pel%ccula que desea buscar:\n",162,161);
            scanf("%d", &clasi_peli);

            int c = buscar_clasificacion(clasi_peli, peli);

            if (c==-1)
            {
                printf("\nLa clasificaci%cn que busca no est%c disponible por el momento.\n",162,160);
            }
            else
            {
                printf("\nT%ctulo: %s",161,peli[c].titulo);
                printf("\nIdioma: %s", peli[c].idioma);
                printf("\nG%cnero: %s",130,peli[c].genero);
                printf("\nClasificaci%cn: R/%d",162,peli[c].clasif);
                printf("\nDuraci%cn: %d min",162, peli[c].duracion);
                printf("\nSala: %s", peli[c].sala);
                printf("\nPrecio: %.2f", peli[c].precio);
                printf("\nHorario\n");

                printf("%d:%d",peli[c].Horarios.hora, peli[c].Horarios.minut);

            }

            system("PAUSE");

            break;
        case 7:
            pagar();
            break;
        case 8:
            printf("\nGracias por usar nuestro servicio. \n\n");
            system("PAUSE");
            break;
        default:
            printf("Opci%cn no valida!!! Por favor, digite otra.\n",163);
            system("PAUSE");
        }

        system("CLS");
    }
    while (opciont!=8);

    return 0;

}
