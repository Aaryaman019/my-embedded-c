#include<stdio.h>

// this is a test function
void myFun1(void);

//   int count=0;
int main()
{
    myFun1();
    myFun1();
    myFun1();
    myFun1();
    myFun1();
    return 0;
}
// here the variable count is a local variable and it is created in the 
// stack memory and it is destroyed once the execution leaves the function
// myFun1(). So, the value of count is lost once the execution leaves
// the function myFun1() and when the function myFun1() is called again,
// a new variable count is created in the stack memory and its value is
// initialized to 0.
// to change this put the varible count declation in the global scope so that 
// it is created in the data segment and it is not destroyed once the execution 
// leaves the function myFun1() and when the function myFun1() is called again, 
// the variable count is not created again and its value is not initialized to 0.
    

void myFun1(void)
{
    int count=0;

    count = count + 1;
printf("The function is called %d times\n",count);

}