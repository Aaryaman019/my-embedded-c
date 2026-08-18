#include<stdio.h>

int main (void)
{

    unsigned char data = (unsigned char) (0x87 + 0xFF00);

    // here the compiler is told explicitly that i know what i am doing and 
    // i want to cast the result of the addition to unsigned char data type.
    // float result = (float) 80/3 ;

    // here without the explicit casting , the compiler will perform the division
    // in int data type , which will result in loss of data as the result of the
    // division will be 26.666666666666668 which is not in the range of int data 
    // type and will be truncated to 26. However with the explicit casting to float data type,
    // the division will be performed in float data type and the result will be 26.666666666666668 
    // which is in the range of float data type and there will be no loss of data.

    printf("Data: %u result : %f\n", data, result);

}