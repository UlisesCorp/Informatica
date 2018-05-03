#include <stdio.h>

int main(void){	
	 int num1;
	 int num2;
	 
	 printf ("ingrese la temperatura de encendido del ventilador: \n");
	 scanf ("%d", &num1 );
	 printf ("ingrese la temperatura del ambiente: \n");
	 scanf ("%d", &num2 );
	 
	 if(num1 > num2){
		printf("ventilador apagado \n");
		}
		
	if(num2 > num1){
		printf("ventilador encendido \n");
		}
	
	
	return 0;
}
