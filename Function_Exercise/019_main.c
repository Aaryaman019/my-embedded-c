
int math_add(int n1, int n2)
{
return n1+n2;
}
int math_sub(int n1, int n2)  
{
return n1-n2;
}
long long math_mul(int n1, int n2)
{
return (long long)n1*n2;
// in order to avoid loss of data when multiplying two large integers,
// we cast the first integer to long long before performing the multiplication. 
// This ensures that the result can accommodate larger values without overflow.
}
float math_div(int n1, int n2)
{
// same thing here, we cast the first integer to float before performing the division.
return (float)n1/n2;
}