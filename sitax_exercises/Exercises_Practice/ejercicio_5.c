/*
5. Hacer una funcion que diga si un numero es primo
*/

#include <stdio.h>

int main() {
	int n, x, num=0;
	printf("Ingresa un rango de numero: ");
	scanf("%i", &n);

	while (n>0) {
		num++;
		x = 1;
		int count = 0;
		while (x<=num) {
			if (num%x==0) {
				count++;
			}
			x++;
		}
		if (count==2) {
			printf("[%i]\t ", num);
			n--;
		}
	}
	return 0;
}