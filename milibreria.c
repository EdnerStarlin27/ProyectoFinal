#include "milibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * leer_datos(){
    char c, *prt;
    int i=0;
    prt = (char *) malloc(1 * sizeof(char));
    while ((c=getch())!='\r'){
        prt = (char*) realloc(prt, (i+2)*sizeof(char));
        prt[i++] = c;
    }
    prt[i]='\0';
    return prt;
}
comprador * datos_comprador(int n){
    comprador * mis_datos = (comprador *) calloc(n, sizeof(comprador));
    for (int i = 0; i < n; ++i) {
printf("Introduzca su nombre: \n");
mis_datos[i].Nombre=leer_datos();
printf("Introduzca su apellido: \n");
mis_datos[i].Apellido=leer_datos();
}
}
void leer_archivo_texto(){
   FILE * archivo;
	archivo=fopen("C:\\Users\\user\\Desktop\\Proyecto Final\\Comida.txt","r");
	if (archivo==NULL){
		printf("No se ha podido abrir el archivo \r\n");
		exit(1);
	}
	char CadenaLeer[100]="";
	while(!feof(archivo)){
		fgets(CadenaLeer,100,archivo);
		puts(CadenaLeer);
	}
	fclose(archivo);
}
