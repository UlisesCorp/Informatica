#include <stdio.h>

int main(void){
	
	printf("Bienvenido a la calculadora de bolsillo \n");
	
	int calculatorOn = 1;
	int i;
	int num1;
	int num2;
	int numResultado;
		
	while(calculatorOn == 1){
		printf("\n");
		printf("Ingrese un numero para elegir que operacion realizar:\n");
		printf("1.Suma.\n");
		printf("2.Resta.\n");
		printf("3.Multiplicacion.\n");
		printf("4.Division.\n");
		printf("5.Apagar Calculadora.\n");
		scanf("%d",&i);
		
		if(i < 6 && i > 0){
		
		if(i != 5){
		
			printf("Ingrese el primer numero: ");
			scanf("%d", &num1);
			printf("Ingrese el segundo numero: ");
			scanf("%d", &num2);
		}
			
			switch (i){
			
				case 1:
					numResultado = num1 + num2; 
					break;
					
				case 2:
					numResultado = num1 - num2; 
					break;
					
				case 3:
					numResultado = num1*num2; 
					break;
					
				case 4:
			
					numResultado = num1/num2; 
					break;
					
				case 5:
					calculatorOn = 2; 
					break;	
				
				default:
					printf("Ooops! something went wrong");
			}
			
			if(i!=5){
			printf("\n Resultado es:");
			printf("%d", numResultado);
			printf("\n");
	}
			if(i == 4){
				int resto = num1%num2;
				printf("\n El resto es:");
				printf("%d,", resto);
				printf("\n");
			}
		}
		
		else{
			printf("Ingreso un numero no valido, intente nuevamente");
		}
	}
	
	return 0;
}
