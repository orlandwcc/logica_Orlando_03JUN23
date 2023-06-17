/*
1. Hacer una funcion que diga si un numero es primo
*/

# include <stdio.h>

int main(){
  int num, count=0;
  printf("Increse un numero: ");
  scanf("%d", &num);
  for(int i=num; i>0; i--){ // i-- reducir valor
    if(num%i==0) // num%i "reciduo de i" ==0 
    count++; 
  }
  if (count==2){
    printf ("El numero %d es primo",num);
  }
  else{
    printf ("El numero %d no es primo ",num);   
  }
  return 0;
}