# include<stdio.h>
int main()
{
    int n,remainder,reversed=0;
    printf("enter the positive  number");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    printf("enter the reversed number+%d",&reversed);
    return 0;
}