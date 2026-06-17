#include <stdio.h>
int main() 
{
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
     {
        if (i == 0) 
        {
            next = first;
        } 
        else if (i == 1)
         {
            next = second;
        }
         else
          {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%llu ", next);
    }

    return 0;
}

