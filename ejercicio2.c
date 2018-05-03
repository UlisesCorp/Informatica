#include <stdio.h>
int main (void) {

  	 int num1;
     int num2;
	 int num3;
printf (" ingrese tres numeros \n");
scanf ("%d", &num1);
scanf ("%d", &num2);
scanf ("%d", &num3);
	 if(num1 > num2 && num1 > num3) {
 printf ("num1 es el mayor \n");
 } 
 if(num2 > num1 && num2 > num3) {
 printf ("num2 es el mayor \n");
 } 
 if(num3 > num1 && num3 > num2) {
 printf ("num3 es el mayor \n");
 } 
if(num2 == num1 && num2 == num3) {
 printf ("todos los numeros son iguales \n");
 } 
 	return 0;
 }
