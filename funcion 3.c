#include <stdio.h>	
int result (int, int);
int main (void)
{
	int res, base, altura;
	printf ("ingresar base");
	scanf ("%d", & base);
	printf ("ingresar altura");
	scanf ("%d", & altura);
	res= result (base, altura);
	printf (" el area es %d", res);
	return 0;
}
int result (int B, int h)
{
	int result;
	result= B*h/2;
	return result;
}
