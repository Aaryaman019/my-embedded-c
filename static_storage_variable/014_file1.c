extern int mainPrivateVariable;

// extern is used to declare a variable that is defined in another file. 
// In this case, mainPrivateVariable is declared as an external variable, 
// which means it is defined in another file (main.c). This allows the function 
// file1_myFun1() to access and modify the value of mainPrivateVariable, 
// even though it is not defined within the same file.

void file1_myFun1(void)
{
    mainPrivateVariable=200;
}