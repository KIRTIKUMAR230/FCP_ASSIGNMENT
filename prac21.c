/*21. Pointer Arithmetic: Write a program to illustrate the following basic pointer arithmetic
operations.
a. Increment a pointer
b. Decrement a Pointer
c. Add an integer to a pointer
d. Subtract an integer from a pointer
e. Subtract two pointers of the same type*/
#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    j=j+1;
    printf("increment of pointer=%d",&j);
} 
