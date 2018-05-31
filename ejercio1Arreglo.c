#include<stdio.h>

#define N 5

int main(void)
{

	int i;
	int a[N];
	
	printf("ingrese los 5 elementos del arreglo \n");
	
	for(i=0; i<5; i++){
		printf("ingrese el elemento a[%d] \n", i);
		scanf("%d", &a[i]);
	}
	
	printf("Los elementos del arreglo son: \n");
	
	for(i = 4; i>0; i--){
		printf("%d\n", a[i]);
	}
	

	return 0;

}
