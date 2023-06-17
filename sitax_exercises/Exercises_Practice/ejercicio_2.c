/*
2. Hacer una funcion que diga si un caracter esta en una cadena.
*/

#include <stdio.h>
#include <string.h>
int main(){
  char c;
  char cadena[]="Este es una cadena ya establecida";
  int count=0;

  printf("digite un caracter: ");
  scanf("%c",&c);

  for(int i=0; i<strlen(cadena); i++){
    if (cadena[i]==c){
    count++;
    }
  }
  if(count>0){
    printf("la cadena de caracteres \"%s\" posee el caracter \"%c\"",cadena,c);
  }else{
    printf("la cadena de caracteres \"%s\" no posee el caracter \"%c\"",cadena,c);
  }
  return 0;
}