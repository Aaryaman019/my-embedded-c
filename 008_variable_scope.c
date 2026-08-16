#include<stdio.h>
void myFun1(void);
int myScore;
int main()
{
myScore=900;
printf("01Value of the variable myscore is %d\n",myScore);

myFun1() ;

return 0;
}

void myFun1(void)
{
    myScore=1000;
    printf("02Value of the variable myscore is %d\n",myScore);

}   