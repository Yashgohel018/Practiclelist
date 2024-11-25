//This program is prepared by 24CE035

#include<stdio.h>
#include<math.h>

int validside(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1; // Valid triangle
    } else {
        return 0; // Not a valid triangle
    }
}

// Function to calculate the area using Heron's formula
void area(int a, int b, int c) {
    float s = (a + b + c) / 2.0; // Semi-perimeter
    float A = sqrt(s *(s - a) * (s - b) * (s - c)); // Heron's formula for area
    printf("\nThe area of the triangle is: %.2f\n", A);
}

void main() {
    int a, b, c;

    // Collecting the sides of the triangle from the user
    printf("Enter the three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);


    if (validside(a, b, c)) {

        area(a, b, c);
    } else {

        printf("\nThe given sides do not form a valid triangle.\n");
    }
    printf("\n24CE035_Yash.");
}
