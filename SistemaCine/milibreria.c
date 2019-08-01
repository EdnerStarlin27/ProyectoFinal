#include "milibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define filas 5
#define columnas 8

int cuenta_total=0;
int opciont,sumatoria_cuenta,fila_pedida,columna_pedida,opcion,break_menu=1,asientos_libres=filas*columnas,asientos_usados=0;
char *butacas[filas][columnas];
int cantidad_asientos=0;
int c_asientos_copy=0;

int buscar_nombre(char nom_peli[50], Peliculas peli[4])//se buscan por nombre
{
    int i;

    for (i=0; i<4; i++)
    {
        if (strnicmp(peli[i].titulo,nom_peli,3)==0)//va buscando de una en una
            return i;
    }

    return -1;
}

int buscar_genero(char gen_peli[50], Peliculas peli[4])//busca por genero
{
    int i;

    for (i=0; i<4; i++)
    {
        if (strnicmp(peli[i].genero,gen_peli,3)==0)
            return i;
    }

    return -1;
}

int buscar_clasificacion(int cal_peli, Peliculas peli[])//por clasificacion
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
    fflush(stdin);
    int n;
    do{
    printf("Escriba en numero del item que desea comprar, si no desea nada presione 8: \n");
    scanf("%d", &n);

    switch (n)//cuenta total va adquiriendo dinero
    {
        case 1:
            cuenta_total+=170;//va sumando a la cuenta total
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
        case 8:
            system("CLS");
            return(main());
            break;
        default:
            break;

    }
    }
    while(n!=8);
}
void seleccion_peli(int num_peli)//se selecciona la pelicula
{
    fflush(stdin);
    Comprador*comp=(Comprador *) calloc(asientos_usados, sizeof(Comprador)); //guarda memoria para el comprador
    for(int i=0; i<filas; i++)
    {
        for(int x=0; x<columnas; x++)
        {
            butacas[i][x]='O';//las que estan disponibles las muestra como O
        }
    }
    switch (num_peli)//dependiendo la pelicula busca y selecciona
    {

    case 1:
        {

        int precio_entrada1= 200;
        printf("Cantidad de asientos: ");//toma como dato la cantidad de asientos a necesitar
        scanf("%d",&cantidad_asientos);
        mostrar_asientos(&butacas,cantidad_asientos);
        c_asientos_copy=cantidad_asientos;
        for(int x=0; x<cantidad_asientos; x++)//toma los datos especificados arriba con nombre reservado, y repite en cada eleccion
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
                butacas[fila_pedida-1][columna_pedida-1]='X';//convierte en X los valores antes tomados como O
                asientos_libres--;
                asientos_usados++;
                cuenta_total+=precio_entrada1;
                c_asientos_copy--;
                mostrar_asientos(&butacas,cantidad_asientos);

            }
        }

        printf("Asientos disponibles en esta sala: %d\n",asientos_libres);//muestra la cantidad de asientos disponibles en la sala
        printf("Asientos usados en esta sala: %d\n",asientos_usados);//muestra la cantidad de asientos usados
        printf("Precio a pagar en caja: $%d\n",cuenta_total);//el valor de la cuenta toal
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
        printf("Precio a pagar en caja: $%d\n",cuenta_total);
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
        printf("Precio a pagar en caja: $%d\n",cuenta_total);

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
    printf("Precio a pagar en caja: $%d\n",cuenta_total);
    break;
    default:
        printf("No existe esta seleccion \n");
}
    }
}

void mostrar_asientos(char * butacas[filas][columnas],int cantidad_asientos)//nos permite visualizar los asientos
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

void pagar()
{
    int decision;
    printf("Buenas, gracias por utilizar nuestro servicio\n");
    printf("Su asiento es %d en la columna %d \n", fila_pedida,columna_pedida);
    printf("Su deuda es: %d $\n", cuenta_total);
    printf("Desea pagar ahora? \n1.Si \n2.No \n");
    scanf("%d", &decision);
    switch(decision)
    {
    case 1:
        if (cuenta_total>0){
        printf("Su ceunta ha sido pagada \n");
        cuenta_total=0;
        }else{
        printf("Su cuenta no tiene expensas, debe elegir antes de pagar \n");
        }
        system("pause");
        system("cls");
        break;
    case 2:
        printf("Volvera al menu de inicio \n");
        system("pause");
        system("cls");
        return main();
        break;
    default:
        break;
    }



}
