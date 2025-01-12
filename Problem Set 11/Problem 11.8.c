// Find coefficient of correlation
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double X[n], Y[n];
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;

    printf("Enter the values of X:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &X[i]);
        sumX += X[i];
        sumX2 += X[i] * X[i];
    }

    printf("Enter the values of Y:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &Y[i]);
        sumY += Y[i];
        sumY2 += Y[i] * Y[i];
    }

    for (i = 0; i < n; i++) {
        sumXY += X[i] * Y[i];
    }

    double numerator = n * sumXY - sumX * sumY;
    double denominator = sqrt((n * sumX2 - sumX * sumX) * (n * sumY2 - sumY * sumY));

    if (denominator == 0) {
        printf("Error: Division by zero. Correlation cannot be calculated.\n");
    } else {
        double r = numerator / denominator;
        printf("The coefficient of correlation (r) is: %.4f\n", r);
    }

    return 0;
}
