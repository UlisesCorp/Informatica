#include <stdio.h>
int main(void) { int base; int altura; int area;
printf("Ingrese la altura del rect´angulo: "); scanf("%d",&altura); printf("Ingrese la base del rect´angulo: "); scanf("%d",&base);
area = base * altura;
printf("El ´area del rect´angulo es: %d\n", area);
return 0;
}
