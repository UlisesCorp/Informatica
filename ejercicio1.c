#include <stdio.h>

int main (void){

	 int num1;
	 int num2;
	 int num3;
	 int promedio;
	 float promedio2;
	 
	 printf ("ingrese dos notas: \n");
	 scanf ("%d", &num1 );
	 scanf ("%d", &num2 );
	 
	

	 promedio = (num1 + num2) / 2;  
	 
	 if(promedio > 8){
			printf("promocionado  \n");
			printf("parcial 1 :"); 
			printf("%d", num1);
			printf("\n");
			printf("parcial 2 :"); 
			printf("%d", num2);
			printf("\n");
		}
		
	 if(promedio < 8  && promedio >= 6){
			printf("aprobado \n");
			printf("parcial 1 :"); 
			printf("%d", num1);
			printf("\n");
			printf("parcial 2 :"); 
			printf("%d", num2);
			printf("\n");
		}
		
	if ( num1 < 6 || num2 < 6) {
		printf (" ingrese nota 3 \n");
		scanf  ("%d", &num3 );
		printf("\n");
		promedio2 = (num1 + num2 + num3) / 3;  
		
		
			if(promedio2 > 8){
				
				printf("promocionado  \n");
				
				printf("parcial 1 :"); 
				printf("%d", num1);
				printf("\n");
				printf("parcial 2 :"); 
				printf("%d", num2);
				printf("\n");
				printf("parcial 3 :"); 
				printf("%d", num3);
				printf("\n");
			}
		
			if(promedio2 < 8  && promedio2 > 6){
				printf("aprobado \n");
				printf("parcial 1 :"); 
				printf("%d", num1);
				printf("\n");
				printf("parcial 2 :"); 
				printf("%d", num2);
				printf("\n");
				printf("parcial 3 :"); 
				printf("%d", num3);
				printf("\n"); 
				}
				 
			if(promedio2 < 6){
				printf("desaprobado \n");
				printf("parcial 1 :"); 
				printf("%d", num1);
				printf("parcial 2 :"); 
				printf("%d", num2);
				printf("parcial 3 :"); 
				printf("%d", num3); 
				}
		
	}
	

	return 0;
}
