// Q33 — Check if a number is an Armstrong number

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, digits = 0;
    long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    /* count number of digits */
    while (num != 0) {
        num = num / 10;
        digits++;
    }

    num = original;
    while (num != 0) {
        digit = num % 10;
        sum = sum + pow(digit, digits);
        num = num / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong Number\n", original);
    } else {
        printf("%d is Not an Armstrong Number\n", original);
    }

    return 0;
}

// Q34 — Check if a number is prime

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a Prime Number\n", num);
    } else {
        printf("%d is Not a Prime Number\n", num);
    }

    return 0;
}