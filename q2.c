#include<stdio.h>
int main()
{
    int p,q;
    int r;
    printf("p is divided by q");
    printf("\n");
    printf("enter value of p and q");
    printf("\n");
    scanf("%d%d",&p,&q);
    r=p%q;

    switch (r)
    {
    case 0:
    printf("number is divisible\n");
        break;
    
    case 1:
    printf("number is not divisible\n");
        break;


    case 2:
    printf("number is not divisible\n");
        break;

    case 3:
    printf("number is not divisible\n");
        break;

    case 4:
    printf("number is not divisible\n");
        break;

    case 5:
    printf("number is not divisible\n");
        break;

    case 6:
    printf("number is not divisible\n");
        break;

    case 7:
    printf("number is not divisible\n");
        break;

    case 8:
    printf("number is not divisible\n");
        break;
    
        
    }
    return 0;

}