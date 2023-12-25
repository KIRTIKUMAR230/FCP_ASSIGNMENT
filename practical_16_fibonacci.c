#include <stdio.h>
int seri(int);
void main()
{
    int i;
    for ( i = 0; i < 8; i++)
    
    
    printf("term is %d: %d\n",i,seri(i));
    
}
    int seri(int i)
    {
        if (i<2)
        return i;
        else
        return seri(i-1)+seri(i-2);
    }
    
