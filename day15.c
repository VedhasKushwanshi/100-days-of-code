// Q29 — Calculate factorial of a number

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}


// Q30 — Reverse a given number

#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}