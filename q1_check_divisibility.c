#include<stdio.h>
int main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    if(number%3==0 && number%5==0 &&number%6==0 &&number%7==0 && number%8==0)
    {
        printf("Nummber is divisble by 3,5,6,7,8");
    }
    else    
        printf("Number is not divisble");

    return 0;
}



