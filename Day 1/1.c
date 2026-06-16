# include<stdio.h>
int main()
{
  int n,sum=0,remainder;
  printf("enter the positive integer n");
  scanf("%d",&n);
  while (n!=0)
  remainder=n%10;
  sum=sum+remainder;
  n=n/10;
  printf("sum of digits of a number=%d",&sum);
  return 0;
}