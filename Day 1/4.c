#include<stdio.h>
int main()
{
int n,remainder,reverse=0;
printf("Enter the value of n");
scanf("%d",&n);
while(n!=0) 
{
    remainder=n%10;
    reverse=reverse*10+remainder;
    n=n/10;
}
if(reverse==n)
{
    printf ("enterd no is palindrome");
}
else
{
    printf("entered no is not palindrome");
}
}