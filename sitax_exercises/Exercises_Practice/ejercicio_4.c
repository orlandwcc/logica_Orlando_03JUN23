#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main() {
	int n, c, i;
	int temp, elem;
	printf(" Ingrese la cant. de elementos del arreglo unidimencional:\n");
	/* 1) Leer y validar n */
	scanf("%i",&n);
	if (n<=1) {
		printf(" Cantidad Invalida\n");
	} else {
		/* 2) Declarar Arreglo */
		int A[n];
		/* 3) Llenar Arreglo */
		for (i=0;i<n;i++) {
			printf(" Ingrese elementos del arreglo[%d]\n",i);
			scanf("%d",&elem);
			A[i]=elem;
		}
		printf("\n");
		/* 4) Mostrar contenido */
		printf("*** Contenido del arreglo ***\n");
		for (i=0;i<n;i++) {
			printf(" [%d]\t ",A[i]);
		}
		printf("\n");
		/* 5) Orden descendente con metodo de intercambio */
		for (i=0;i<n-1;i++) {
			for (c=i+1;c<n;c++) {
				if (A[i]>A[c]) {
					temp = A[i];
					A[i] = A[c];
					A[c] = temp;
				}
			}
		}
		printf("*** Arreglo ordenado en forma ascendente ***\n");
		for (i=0;i<n;i++) {
			printf(" [%d]\t ",A[i]);
		}
  }
  return 0;
}