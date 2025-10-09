#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid Triangle\n");
        if (a == b && b == c)
            printf("Equilateral Triangle\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle\n");
        else if (fabs(a*a + b*b - c*c) < 0.001 ||
                 fabs(b*b + c*c - a*a) < 0.001 ||
                 fabs(a*a + c*c - b*b) < 0.001)
            printf("Right-Angled Triangle\n");
        else
            printf("Scalene Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}
