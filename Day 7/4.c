#include <stdio.h>
int reverseNumber(int n, int rev)
 {
    if (n == 0) 
    {
        return rev;  
    } else
 {
        return reverseNumber(n / 10, rev * 10 + (n % 10));  
    }
}

int main() 
{
    int num, reversed;
    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverseNumber(num, 0);

    printf("Reversed number of %d is %d\n", num, reversed);

    return 0;
}
