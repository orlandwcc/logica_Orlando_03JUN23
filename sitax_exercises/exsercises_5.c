#include <stdio.h>

int main(){
    /*
    Variables en C 

    Las variables son contenedores para almacenar valores de datos, como numeros y caracteres. 

    En C, hay diferentes tipos de variables (definidas por diferentes palabras), por ejemplo:
    
    *Int - almacena enteros (numeros enteros), sin decimales, como 123 o -123
    *Float - almacena numeros de coma flotantes o decimales, como 19.99 o -19.99
    *Char - almacena caracteres individuales, como 'a' o 'b'. Los valores de char estan entre comillas simples 
    */

    /*
    Declaracion (crear variables) de variables

    Para crear una variable en C especifique el tipo y asignele un valor:

    *sintaxis

    tipo nombreVariable = valor

    Donde tipo es uno de los tipos de variables en C (Como int) y nombreVariable es el nombre de la variable (Como x o miNombre). El signo igual se utiliza para asignar un valor de una variable.

    */
    
    //Crear una variable que almacene un nimero entero.

    //int Minumero=15;

    /*
    Tambien puede asignar una variable sin asignar el valor y colocarlo mas tarde
    */
    
    // Declaracion de la variale
    //int mynum;

    //Signamos el valor de la vairable
    //mynum = 15;

    /*
    si intentamos imprimir una vairable en c no va a ocurrir nada, si no le damos el formato especifico
    */

    /*int mynum = 15;
    printf(mynum); //nada va a ocurrir)
    */
    
    /*
    para imprimir o hacer uso de variables en C debemos familiarizarnos con los especificadores de formato"
    */

    //especificadores de formato

    /*
    Los especificadores de formato se usan con la funcion "printf()" para decirle al compilador que tipo de datos esta almacenando la variable 
    
    Un especificador de formato comienza con un signo de %, seguido de un caracter.

    por ejemplo para generar el valor de una variable int, debe usar el especificador %d o %i y estar entre comillas dobles, dentro de la funcion printf ()
    */
/* 
    int minumero=15;
    printf("%d", minumero); //la salida es 20 */

    //para imprimir otros tipos, use %c para char y %f para float

    //decimal o de coma flotante
    /* float minumerodecimal =9.33;

    //para un caracter
    char miletra='n';

    //impresion de variables
    printf("%f\n", minumerodecimal);
    printf("%c\n", miletra); */

    /*
    para combinar textos y variables, separelos con una coma dentro de la funcion printf
    */

    /* int minumero =50;
    printf("mi numero favorito es el: %d", minumero);
    */

    /*para imprimir diferentes tipos de variables en un solo printf() se puede hacer lo siguiente: */

    int minumero =30;
    char miletra ='l';

    printf("mi numero es: %d Y mi letra es %c", minumero, miletra);


return 0;
}
