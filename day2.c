//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main() {
    int length, breadth,area, perimeter;
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}
//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main() {
    float r, area, circumference;
    float pi = 3.14159;

    scanf("%f", &r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f", circumference);

    return 0;
}
