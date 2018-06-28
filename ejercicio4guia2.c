#include <stdio.h>

int main(int argc, char **argv)
{
	int parcial1,parcial2,recuperatorio;
	int prom;
	
	
	
	printf("Ingrese la primera nota \n");
	scanf("%d", &parcial1);
	printf("Ingrese la segunda nota \n");
	scanf("%d", &parcial2);
	
	
	if(parcial1 >= 6){
		if(parcial2 >= 6){
			prom = (parcial1 + parcial2)/2;
			if(prom >= 6){
				if(prom >= 8){
					printf("promocionado \n");
					}
				else
					printf("aprobado \n");
					}
			}
		
			else{ 
				printf("Ingrese la nota del recuperatorio \n");
				scanf("%d", &recuperatorio);
				prom = (parcial1 + parcial2 + recuperatorio)/3;
		
				if(prom >= 6){
					if(prom >= 8){
						printf("Promocionado \n");
					}
					
					else
					printf("Aprobado \n");
				}
							
				else
					printf("Reprobado \n");
					
				}
						

		}
				
		
	else{ 
		printf("Ingrese la nota del recuperatorio \n");
		scanf("%d", &recuperatorio);
		prom = (parcial1 + parcial2 + recuperatorio)/3;
		
		if(prom >= 6){
			if(prom >= 8){
				printf("Promocionado \n");
				}
			else
				printf("Aprobado \n");
				}
		else
			printf("Reprobado \n");
	}
					
	return 0;
}

