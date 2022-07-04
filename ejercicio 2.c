//ejercicio figuras

#include <stdlib.h>
#include<stdio.h>

int main(){
int opcion;
do{
printf("\n\nMen%c\n 1. Tri%cngulo\n 2. Cuadrado\n 3. Linea\n 4. Salir\n",163,160);
scanf("%d",&opcion);
switch(opcion){
case 1:printf("  *  \n *** \n*****");
break;
case 2:printf("*****\n*   *\n*****");
break;
case 3:printf("*********");
break;
case 4: system("cls");
}
}
while(opcion!=4);
return 0;
}
