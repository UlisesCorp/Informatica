#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num,factorial;
	
	printf("Ingrese un numero para obtener su factorial (a menos que seas tan bobo de no saber que es un factorial)");
	scanf(" %d", &num);
	factorial = 1;
	for(int i=0; i < num; i++){
		 factorial = (i+1)*factorial;
	}
	
	printf(" %d ", factorial);
	return 0;
}

