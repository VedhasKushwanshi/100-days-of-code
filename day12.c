// Q23 — Calculate library fine based on late days

#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        fine = 0;
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4;
    } else if (lateDays <= 30) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
    } else {
        printf("Membership Cancelled\n");
        return 0;
    }

    printf("Fine = %.2f\n", fine);

    return 0;
}

// Q24 — Calculate electricity bill based on units consumed
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Electricity Bill = %.2f\n", bill);

    return 0;
}