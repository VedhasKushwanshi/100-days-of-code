//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is odd", n);

    return 0;
}
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Zero");
        else
            printf("Positive");
    }
    else {
        printf("Negative");
    }

    return 0;
}
