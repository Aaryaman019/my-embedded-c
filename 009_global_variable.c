#include<stdio.h>
int valueA=5;
int main()
{
 // here valueA is a global variable and can be accessed anywhere in the program.
 {
    int valueA=20;
 }
 // the valueA =20 is stored only while the execution loops in the block and once the execution leaves the block, the valueA=20 is lost and the value of valueA=5 is restored.
    printf("Value of the variable valueA is %d\n",valueA);
    return 0;
}