#include<stdio.h>

int main(void){
	printf("Ingrese el anio: ");
	int anio;
	scanf("%d",&anio);
	printf("Ingrese la divison (carrrera): ");
	char division;
	division=getchar();
	scanf("%c",&division);
	printf("Ingrese el numero del curso: ");
	int curso;
	scanf("%d",&curso);	
	printf("Bienvenidos alumnos del curso: ");
	printf("%d",anio);
	printf("%c",division);
	printf("%d",curso);
	printf("!");
	
	return 0;
}


