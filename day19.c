
// Q37 — Find the LCM of two numbers

#include <stdio.h>

int main() {
    int a, b, larger, lcm = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;

    while (1) {
        if (larger % a == 0 && larger % b == 0) {
            lcm = larger;
            break;
        }
        larger++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}


// Q38 — Find the sum of digits of a number

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}