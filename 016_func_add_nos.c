#include <stdio.h>

void function_add_numbers(int a, int b, int c);

int main ()
{
    function_add_numbers(10,20,30);
    function_add_numbers(100,200,300);
    function_add_numbers(1000,2000,3000);

    int valuea= 90, valueb= 80;
    function_add_numbers(valuea, valueb, 100);

    return 0;
}

//this is function definition 
void function_add_numbers(int a, int b, int c)
{
    int sum;
    sum = a+b+c;
    printf("The sum of three numbers is : %d\n",sum);

}