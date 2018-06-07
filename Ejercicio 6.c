#include <stdio.h>

int main (){
	int mayor,n;
	
	for(int i=0; i < 10; i++){
		printf("Ingrese el numero (%d):", i+1);
		scanf(" %d", &n);
		if (i == 0){
			mayor = n;
		}
		if(n > mayor){
			mayor = n;
		}
	}

	printf("El mayor numero ingresado es: %d", mayor);
}
