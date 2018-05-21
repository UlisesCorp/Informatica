#include<stdio.h>

int main(void){
	
	int num1;
	int num2;
	int resultado;
	
	printf("Este programa realizara el producto entre 2 numeros\n");
	printf("Ingrese el primer numero:");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero:");
	scanf("%d",&num2);
	resultado = num1*num2;
	printf("%d",num1);
	printf(" * ");
	printf("%d",num2);
	printf(" = ");
	printf("%d",resultado);
	
	return 0;
		
}
