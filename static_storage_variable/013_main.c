#include<stdio.h>

void file1_myFun1(void);
int mainPrivateVariable;
// static int mainPrivateVariable; 
// static keyword is used to make the variable mainPrivateVariable
//  private to the file main.c and it cannot be accessed outside the file
//  main.c.

// in oreder to stop the change of value of variable mainPrivateVariable from main.c ,
//  we can use the static keyword, but it will throw a error during compilation,
//  as the variable is not visible to the function file1_myFun1() in file1.c.

int main ()

{
    mainPrivateVariable=100;

    printf("mainPrivateVariable is %d\n",mainPrivateVariable);

    file1_myFun1();

    printf("mainPrivateVariable is %d\n",mainPrivateVariable);

    return 0;
}