//Q13 — Check leap year

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year\n", year);
            } else {
                printf("%d is Not a Leap Year\n", year);
            }
        } else {
            printf("%d is a Leap Year\n", year);
        }
    } else {
        printf("%d is Not a Leap Year\n", year);
    }

    return 0;
}

//Q14 — Check vowel or consonant

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}