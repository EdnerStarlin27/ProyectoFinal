#include "milibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define filas 5
#define columnas 8

int * cuenta_total;
int opciont,sumatoria_cuenta,fila_pedida,columna_pedida,opcion,break_menu=1,asientos_libres=filas*columnas,asientos_usados=0;
char *butacas[filas][columnas];
int cantidad_asientos=0;
int c_asientos_copy=0;

int buscar_nombre(char nom_peli[50], Peliculas peli[4])
{
    int i;

    for (i=0; i<4; i++)
    {
        if (strnicmp(peli[i].titulo,nom_peli,3)==0)
            return i;
    }

    return -1;
}

int buscar_genero(char gen_peli[50], Peliculas peli[4])
{
    int i;

    for (i=0; i<4; i++)
    {
        if (strnicmp(peli[i].genero,gen_peli,3)==0)
            return i;
    }

    return -1;
}

int buscar_clasificacion(int cal_peli, Peliculas peli[])
{
    int i;

    for (i=0; i<4; i++)
    {
        if (cal_peli == peli[i].clasif)
            return i;
    }

    return -1;
}
void comprar_comida()
{
    int n;
    cuenta_total=realloc(n,sizeof(int));
    do{
    printf("Escriba en numero del item que desea comprar: \n");
    scanf("%d", &n);
    printf("\n Si no desea comprar mas, presione 8 \n");
    switch (n)
    {
        case 1:
            cuenta_total+=170;
        break;
        case 2:
            cuenta_total+=170;
            break;
        case 3:
            cuenta_total+=150;
            break;
        case 4:
            cuenta_total+=120;
            break;
        case 5:
            cuenta_total+=70;
            break;
        case 6:
            cuenta_total+=50;
            break;
        case 7:
            cuenta_total+=25;
            break;
        default:
            break;

    }
    }
    while(n!=8);
    free(cuenta_total);
}
void seleccion_peli(int num_peli)
{
    Comprador*comp=(Comprador *) calloc(asientos_usados, sizeof(Comprador));
    cuenta_total=(int *)malloc(sizeof(int));
    for(int i=0; i<filas; i++)
    {
        for(int x=0; x<columnas; x++)
        {
            butacas[i][x]='O';
        }
    }
    switch (num_peli)
    {

    case 1:
        {

        int precio_entrada1= 200;
        printf("Cantidad de asientos: ");
        scanf("%d",&cantidad_asientos);
        mostrar_asientos(&butacas,cantidad_asientos);
        c_asientos_copy=cantidad_asientos;
        for(int x=0; x<cantidad_asientos; x++)
        {
            printf("Nombre: \n");
            scanf("%s", comp[x].nombre);
            printf("Asientos por elegir: %d\n",c_asientos_copy);
            printf("Ingrese la fila del asiento(1-5): ");
            scanf("%d",&fila_pedida);
            printf("Ingrese la columna del asiento(1-8): ");
            scanf("%d",&columna_pedida);
            if(butacas[fila_pedida-1][columna_pedida-1]=='O')
            {
                butacas[fila_pedida-1][columna_pedida-1]='X';
                asientos_libres--;
                asientos_usados++;
                cuenta_total+=precio_entrada1;
                c_asientos_copy--;
                mostrar_asientos(&butacas,cantidad_asientos);

            }
        }

        printf("Asientos disponibles en esta sala: %d\n",asientos_libres);
        printf("Asientos usados en esta sala: %d\n",asientos_usados);
        printf("Precio de entradas: $%d\n",cuenta_total);
        free(cuenta_total);
    }
    break;
    case 2:
        {


        int precio_e2=350;
        printf("Cantidad de asientos: ");
        scanf("%d",&cantidad_asientos);
        mostrar_asientos(&butacas,cantidad_asientos);
        c_asientos_copy=cantidad_asientos;
        for(int x=0; x<cantidad_asientos; x++)
        {
            printf("Nombre: \n");
            scanf("%s", comp[x].nombre);
            printf("Asientos por elegir: %d\n",c_asientos_copy);
            printf("Ingrese la fila del asiento(1-5): ");
            scanf("%d",&fila_pedida);
            printf("Ingrese la columna del asiento(1-8): ");
            scanf("%d",&columna_pedida);
            if(butacas[fila_pedida-1][columna_pedida-1]=='O')
            {
                butacas[fila_pedida-1][columna_pedida-1]='X';
                asientos_libres--;
                asientos_usados++;
                cuenta_total+=precio_e2;
                c_asientos_copy--;
                mostrar_asientos(&butacas,cantidad_asientos);

            }
        }

        printf("Asientos disponibles: %d\n",asientos_libres);
        printf("Asientos usados: %d\n",asientos_usados);
        printf("Precio de entradas: $%d\n",cuenta_total);
        free(cuenta_total);
    }
    break;
    case 3:
        {

        int precio_e3=200;
        printf("Cantidad de asientos: ");
        scanf("%d",&cantidad_asientos);
        mostrar_asientos(&butacas,cantidad_asientos);
        c_asientos_copy=cantidad_asientos;
        for(int x=0; x<cantidad_asientos; x++)
        {
            printf("Nombre: \n");
            scanf("%s", comp[x].nombre);
            printf("Asientos por elegir: %d\n",c_asientos_copy);
            printf("Ingrese la fila del asiento(1-5): ");
            scanf("%d",&fila_pedida);
            printf("Ingrese la columna del asiento(1-8): ");
            scanf("%d",&columna_pedida);
            if(butacas[fila_pedida-1][columna_pedida-1]=='O')
            {
                butacas[fila_pedida-1][columna_pedida-1]='X';
                asientos_libres--;
                asientos_usados++;
                cuenta_total+=precio_e3;
                c_asientos_copy--;
                mostrar_asientos(&butacas,cantidad_asientos);

            }
        }

        printf("Asientos disponibles: %d\n",asientos_libres);
        printf("Asientos usados: %d\n",asientos_usados);
        printf("Precio de entradas: $%d\n",cuenta_total);
        free(cuenta_total);

    }
    break;

    case 4:
        {

    int precio_e4=250;
    printf("Cantidad de asientos: ");
    scanf("%d",&cantidad_asientos);
    mostrar_asientos(&butacas,cantidad_asientos);
    c_asientos_copy=cantidad_asientos;
    for(int x=0; x<cantidad_asientos; x++)
    {
        printf("Nombre: \n");
        scanf("%s", comp[x].nombre);
        printf("Asientos por elegir: %d\n",c_asientos_copy);
        printf("Ingrese la fila del asiento(1-5): ");
        scanf("%d",&fila_pedida);
        printf("Ingrese la columna del asiento(1-8): ");
        scanf("%d",&columna_pedida);
        if(butacas[fila_pedida-1][columna_pedida-1]=='O')
        {
            butacas[fila_pedida-1][columna_pedida-1]='X';
            asientos_libres--;
            asientos_usados++;
            cuenta_total+=precio_e4;
            c_asientos_copy--;
            mostrar_asientos(&butacas,cantidad_asientos);

        }
    }

    printf("Asientos disponibles: %d\n",asientos_libres);
    printf("Asientos usados: %d\n",asientos_usados);
    printf("Precio de entradas: $%d\n",cuenta_total);
    break;
    free(cuenta_total);
    default:
        printf("No existe esta seleccion \n");
}
    }
}

void mostrar_asientos(char * butacas[filas][columnas],int cantidad_asientos)
{
    system("cls");

    for(int i=0; i<columnas; i++)
    {
        printf("  %d ",i+1); //Columnas contador
        if(i==1)
            printf("  ");
        if(i==7)
            printf("  ");

    }
    printf("\n");
    for(int i=0; i<filas; i++)
    {
        printf("%d ",i+1);  //Contador filas
        for(int x=0; x<columnas; x++)
        {
            printf("%c   ",butacas[i][x]);
            if(x==1)
                printf("  ");
            if(x==7)
                printf("  ");

        }
        printf("\n");
    }
    printf("\n");


}
int buscar_numero(char *fila)
{
    fila=(char*)calloc(40,sizeof(char));
    for(int x=0; x<strlen(fila); x++)
    {
        if(fila [x] >= '0' && fila [x] <= '8')
        {
            return fila[x];
        }

    }
}

