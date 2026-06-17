#include<stdio.h>
int main()
{
    int start,end;
    printf("enter the range (start and end):");
    scanf("%d%d",&start,&end);
    printf("prime numbers between %d and %d are:",start,end);
    for(int num = start;num<=end;num++)
    {
        if(num<=1)
        {
            continue;
        }
        int isprime=1;
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                isprime=0;
                break;
            }
            if(isprime==1)
            {
                printf("%d",num);
            }
        }
    }
}