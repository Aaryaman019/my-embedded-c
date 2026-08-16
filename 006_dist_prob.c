#include<stdio.h>
int main ( )
{ 
unsigned char distanceA2B; unsigned char distanceB2C; unsigned char distanceA2C;
distanceA2B=160;
distanceB2C=40;
distanceA2C= distanceA2B+ distanceB2C;
printf("the distance from A2C is %d \n", distanceA2C);
return 0;
}
