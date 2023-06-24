/*
3. Hacer una funcion que diga si en una cadena hay solo digitos 
*/

#include <stdio.h>
#include <string.h>
int main() {
    char cadena[100];
    int i, count=0;

    printf("Digite una cadena de caracteres: ");
    gets(cadena);
    for(int i=0; i<strlen(cadena); i++){
        if (cadena[i]>='0' && cadena[i]<='9'){
            count++;
        }
    }
    if(count==strlen(cadena)){
        printf("la cadena de caracteres \"%s\" posee solo digitos", cadena);  
    }
    if(count>0){
        printf("la cadena \"%s\" posee \"%d\" digitos", cadena, count);
    }
    else{
        printf("la cadena de caracteres \"%s\" no posee digitos", cadena);
    }
    return 0;
}