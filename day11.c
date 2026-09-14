// Q21 — Display month name and number of days using switch-case

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: printf("January - 31 days\n"); break;
        case 2: printf("February - 28/29 days\n"); break;
        case 3: printf("March - 31 days\n"); break;
        case 4: printf("April - 30 days\n"); break;
        case 5: printf("May - 31 days\n"); break;
        case 6: printf("June - 30 days\n"); break;
        case 7: printf("July - 31 days\n"); break;
        case 8: printf("August - 31 days\n"); break;
        case 9: printf("September - 30 days\n"); break;
        case 10: printf("October - 31 days\n"); break;
        case 11: printf("November - 30 days\n"); break;
        case 12: printf("December - 31 days\n"); break;
        default: printf("Invalid month number\n");
    }

    return 0;
}

//Q22 — Find profit or loss percentage

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}