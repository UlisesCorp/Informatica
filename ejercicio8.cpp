#include<stdio.h>

int main (void){
	
	float gradosCentigrados;
	float gradosFarenheit;
	
	printf("Ingrese los grados Centigrados a convertir: ");
	scanf("%f",&gradosCentigrados);
	gradosFarenheit = (((gradosCentigrados * 9) / 5 ) + 32);
	printf("%f",gradosCentigrados);
	printf(" equivalen a: ");
	printf("%f",gradosFarenheit);
	printf(" grados Farenheit");
	
	return 0;
}
