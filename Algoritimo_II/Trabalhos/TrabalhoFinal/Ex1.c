#include <stdlib.h>
#include <stdio.h>


float calculaq (float h, float b, float *p, float *a){
*p = 2 * h + 2 * b; //Per�metro
*a = b * h ;//�rea
}
float calculat (float h, float b, float *p, float *a){
*p = 2*h + b; //Per�metro
*a = b * h/2;//�rea
}
 main(){

 float h, p, a, b;
 printf("Digite a altura e a base \n");
 scanf ("%f %f", &h,&b);

 calculaq(h, b, &p, &a);
 printf ("area do quadrado = %.2f, perimetro do quadrado= %.2f \n", a, p);
 calculat(h, b, &p, &a);
 printf ("area do triangulo = %.2f, perimetro do triangulo= %.2f \n", a, p);
 }
