#include <stdio.h>

int function_add_numbers(int a, int b, int c);

int main ()
{
    int retValue;
    retValue = function_add_numbers(10,20,30);
  
   printf("The sum is: %d\n", retValue);

    return 0;
}

//this is function definition 
int function_add_numbers(int a, int b, int c)
{
    int sum;
    sum = a+b+c;
    return sum;
}
