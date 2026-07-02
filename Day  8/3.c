#include<stdio.h>
int main()
{
    int row,i,j;
    printf("enter the no. of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
{
    for(j=0;j<=i;j++)
{
    printf("%c",'A'+j);
}
    printf("\n");
}
    return 0;
}