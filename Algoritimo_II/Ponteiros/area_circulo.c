#include <stdlib.h>
#include <stdio.h>


float calcula (float r, float *p, float *a){
*p = 2 * 3.14 * r; //Perímetro
*a = 3.14 * r * r;//Área
}
 main(){

 float r, p, a;
 printf("Digite o raio\n");
 scanf ("%f", &r);
 calcula (r, &p, &a);
 printf ("raio = %.2f, perimetro = %.2f, area = %.2f\n", r, p, a); }
