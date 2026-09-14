// Q27 — Print sum of first n odd numbers

#include <stdio.h>

int main() {
    int n, i, num = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + num;
        num = num + 2;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}


// Q28 — Print product of even numbers from 1 to n
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
        }
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}