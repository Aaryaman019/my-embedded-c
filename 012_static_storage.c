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

// now the variable count is a global variable but is visible only to the 
// function within th eprogram, it cannot be accessed outside the myFun1 function.
// So the variable stays private , otherwide it could be accesses by other functions
// from th eproject which may use the same variable name and it may cause confusion.
// So, to make the variable count private to the function myFun1(), we can use the 
// static keyword in front of the variable count. So, the variable count is created
// in the data segment and it is not destroyed once the execution leaves the function 
// myFun1() and when the function myFun1() is called again, the variable count is not 
// created again and its value is not initialized to 0.

void myFun1(void)
{
     static int count=0;

    count = count + 1;
printf("The function is called %d times\n",count);

}