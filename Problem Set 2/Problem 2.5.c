#include <stdio.h>
#include <math.h> // Include math library for sqrt and atan2 functions

int main() {
    double x, y, r, theta;

    // Input Cartesian coordinates
    printf("Enter the Cartesian coordinates (x, y): ");
    scanf("%lf %lf", &x, &y);

    // Convert to polar coordinates
    r = sqrt(x * x + y * y);         // Calculate radius
    theta = atan2(y, x);            // Calculate angle in radians

    // Display the results
    printf("Polar Coordinates:\n");
    printf("r = %.2f\n", r);
    printf("θ (in radians) = %.2f\n", theta);

    return 0;
}
