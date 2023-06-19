# include <stdio.h>

int main(){
int a; //Se declara la variable "a" como entero, en la cual se almacenara el tamaño del vector

printf("Tamaño: ");
scanf("%d", &a); //Asignamos el tamaño

int array[a];
for(int i=0; i<a; i++){
printf("Ingrese un valor: ");
scanf("%d",&array[i]);
}

int suma=0;
for(int i=0; i<a; i++){
    suma+=array[i];
}
printf ("suma es %d \n", suma);
return 0;
}