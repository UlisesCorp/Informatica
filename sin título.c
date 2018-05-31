#include <stdio.h>
int main(void)
{
	int i=0, temp=101, cont=0,prom;	
	
	while(temp!= -1)
	{
		while(temp<0 || temp>100)
		{
		printf("Ingrese la temperatura (%d): ",i+1);
		scanf("%d",&temp);
		
		}
	i++;
	cont++;
	}
}
