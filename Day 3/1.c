#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            printf("entered no is prime ");
            return 0;
            
        }
        else 
        {
            printf("entered no is not prime");
            return 0;
        }
    }
}
