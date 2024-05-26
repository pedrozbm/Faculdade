#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



dec(int *p, int *p2, int *p3){

 *p = *p-1;
 *p2 = *p2-1;
  *p3 = *p3-1;
}

main(){
int a = 10 , b = 5, c = 14;

dec(&a,&b,&c);
printf("\n valor de a = %d",a);
printf("\n valor de b = %d",b);
printf("\n valor de c = %d",c);
}
