//Q39 — Find the product of odd digits of a number

#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product = product * digit;
            foundOdd = 1;
        }
        num = num / 10;
    }

    if (foundOdd) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("No odd digits found\n");
    }

    return 0;
}

//Q40 — Find the 1's complement of a binary number

#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's Complement: ");
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}