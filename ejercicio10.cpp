#include<stdio.h>

int main(void){
	
	int num1;
	int num2;
 
 	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("El mayor es el primero");
	}
	
	if(num1<num2){
		printf("El mayor es el segundo");
	}
	
	if(num1==num2){
		printf("Son iguales");
	}	
	
	return 0;
}
