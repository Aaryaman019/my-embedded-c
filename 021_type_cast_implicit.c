#include<stdio.h>

int main (void)
{

    unsigned char data = 0x87 + 0xFF00;

    // here the rhs is a int data type and the lhs is a unsigned char data type. 
    // So, the compiler will perform implicit type casting of the rhs to the lhs data type.
    // The result of this operation will be 0x87 + 0x00 = 0x87.


    // The addition is performed in int: 0x87 + 0xFF00 = 0xFF87
    // Then 0xFF87 is truncated to unsigned char: 0x87

    // this causes loss of data as the numbers are not in the range of the unsigned char data type.
    // however if we use smaller numbers like 0x87 + 0x01, then the result will be 0x88 which is in the range of the unsigned char data type and there will be no loss of data.
    float result = 80/3 ;

    printf("Data: %u result : %f\n", data, result);

}