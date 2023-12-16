#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],mul[3][3],r,c,i,j,k;
    int m=3,n=3,p=3,q=3;
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        
        {



            a[i][j]=(i)+ (i+1);
            b[i][j]=(i+1)*6+ 2*(j+1);
            printf("%d",a[i][j]);


        }
        printf("\n");

    }
    printf("\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

            b[i][j]=(i+1)+ (j+1);
            printf("%d",b[i][j]);

        }
        printf("\n");

    }
    return 0;
}