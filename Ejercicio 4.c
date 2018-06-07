#include <stdio.h>

int main (){
	char car;
	printf("Ingrese el caracter: ");
	scanf(" %c", &car);

	if (car >= 48 && car <= 60)
		printf("El caracter ingresado es un número\n");
	 else
		printf("El caracter ingresado no es un número\n");
	
	return 0;
}
