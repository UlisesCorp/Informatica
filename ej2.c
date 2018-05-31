#include <stdio.h>
int main(void)
{
	int n=0, cant=0, suma;
	float prom;
	while(cant<4)
	{
		while(n<1 || n>10)
		{	printf("Ingrese la nota (%d): ",cant+1);
		scanf("%d", &n);
		}
		suma=+n;
		n=0;
		printf("Nota valida\n");
		cant++;
		
	}
	prom= suma/.4;

	return 0;
}
