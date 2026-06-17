#include <stdio.h>

int main() {
    int a, b, tempA, tempB;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm for GCD
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    int gcd = tempA;
    int lcm = (a * b) / gcd;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
