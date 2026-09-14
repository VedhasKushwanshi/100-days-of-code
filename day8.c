//Q15 — Check uppercase, lowercase, digit, or special character

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}
//Q16 — Find the largest among three numbers
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest number is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest number is %d\n", b);
    } else {
        printf("Largest number is %d\n", c);
    }

    return 0;
}