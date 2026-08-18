#include<stdio.h>
#include "math.h"

int main(void)

{
printf("Add: %d\n", math_add( 5312, 3424) ) ;

printf("Sub: %d\n", math_sub( 534, 3423) ) ;

printf("Mul: %lld\n", math_mul( 54234, 4323242) ) ;

printf("Div: %f\n", math_div( 544, 3) ) ;

return 0;
}