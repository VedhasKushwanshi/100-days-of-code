//Q9 — Simple and Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    si = (principal * rate * time) / 100;
    ci = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
//Q10 — Convert seconds to hours:minutes:seconds

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
