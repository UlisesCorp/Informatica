#include <stdio.h>

int main(void)
{
	float duracion;
	float costo;
	printf("Ingrese duracion de llamada(en minutos): \n");
	scanf(" %f",&duracion);
	if (duracion>3)
	{
		costo=(1.5+(duracion-3)*0.2);
	}
	else 
	costo=(duracion*0.5);
	printf("La duracion es %.2f y el precio es %.2f\n",duracion,costo);
	return 0;
}
	
	
