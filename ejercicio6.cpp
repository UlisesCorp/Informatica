#include<stdio.h>

int main(void){
	printf("Ingrese la cantidad de dias a convertir:");
	int numero;
	scanf("%d",&numero);
	int anos = numero/365;
	int resto = numero%365;
	int semanas = resto/7;
	resto = resto%7;
	printf("años:");
	printf("%d",anos);
	printf("\nsemanas:");
	printf("%d",semanas);
	printf("\ndias:");
	printf("%d",resto);
	
	return 0; 
}
