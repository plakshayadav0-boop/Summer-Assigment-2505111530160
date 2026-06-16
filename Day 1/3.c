# include<stdio.h>
int main()
{
    int n, remainder, product=1;
    printf("enter the number: ");
    scanf("%d[]", &n);
    if(n==0)
     {
        product==0;
     }
     while(n!=0)
    {
        remainder=n%10;
        product=product*remainder;
        n=n/10;
    }
    printf("product of digits: %d", product);
    return 0;
}