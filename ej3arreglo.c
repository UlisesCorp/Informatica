#include<stdio.h>

#define N 5

int main(void)
{

	int i,p;
	int a[N];
	int m;
	
	printf("ingrese los 5 elementos del arreglo \n");
	
	for(i=0; i<5; i++){
		printf("ingrese el elemento a[%d] \n", i);
		scanf("%d", &a[i]);
		if (i==0)
			m=a[i];
		if(a[i]>m)
		{ m=a[i];
			p=i;
		}
		}
	printf("El mayor es a[%d] con un %d\n", p,m);
		
		
	}
