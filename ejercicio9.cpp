#include<stdio.h>

int main(void){
	const double pi = 3.14159265358979323846;

	float radio;
	float volumen;
	
	printf("Ingrese el radio de la esfera: ");
	scanf("%f",&radio);
	volumen = ((((float)4 / (float)3) * pi) *radio *radio *radio);
	printf("El volumen de la esfera es: ");
	printf("%f", volumen);
	
	return 0;
}
