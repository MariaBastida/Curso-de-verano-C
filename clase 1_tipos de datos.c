/*Clase 1 27/06/22 C es un lenguaje fuertemente tipado*/


#include<stdio.h> //Las bibliotecas son librerias con funciones

int main(){
/* code  tipo de datos*/
int entero=0;
float flotante=3.1416;
double doble=0.0; //recuerda que para double es lf
char caracter='f';
long largo=0;
int aux=0;
printf("%d  %f  %lf  %c  %d\n",entero,flotante,doble,caracter,largo);
//bool boleano; No hay tipo bool en c
aux = entero-1;
printf("%d",aux);
printf("\n\t\tHola mundo\n");

struct ejemplo{
int entero;
char c;
};
struct ejemplo e1={10,'c'};
printf("%d",e1.entero);
printf("%c",e1.c);
return 0;
}
