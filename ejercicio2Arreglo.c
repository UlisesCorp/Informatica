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
	
	printf("Los elementos pares del arreglo son: \n");
	
	for(i=0; i<5; i++){
		if( a[i]%2 == 0){
			printf("a[%d] : %d \n4",i,a[i]);
		}
	}
	

	

	return 0;

}
