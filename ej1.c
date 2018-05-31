#include <stdio.h>
int main(void)
{
	int n=0;
	while(n<1 || n>10)
	{	printf("Ingrese una nota valida (1-10): ");
		scanf("%d", &n);
	}
	printf("Nota valida\n");
	
	return 0;
}
