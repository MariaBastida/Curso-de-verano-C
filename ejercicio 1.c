//Almacenar nombre en un array por consola
#include<stdlib.h>
#include<stdio.h>

int main(){
int i;
char nombre[10];
printf("\nIngresa tu nombre: ");
/*for(i=0;i<5;i++){
scanf("%c",&nombre[i]);
}
for(i=0;i<5;i++){
printf("%c",nombre[i]);
}*/
scanf("%c",&nombre[0]);
scanf("%c",&nombre[1]);
scanf("%c",&nombre[2]);
scanf("%c",&nombre[3]);
scanf("%c",&nombre[4]);
printf("\t Nombre: %c",nombre[0]);
printf("%c",nombre[1]);
printf("%c",nombre[2]);
printf("%c",nombre[3]);
printf("%c",nombre[4]);

return 0;
}
