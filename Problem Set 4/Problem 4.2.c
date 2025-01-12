// In digital world colors are specified in Red-Green-Blue (RGB) format,
//  with values of R, G, B varying on an integer scale from 0 to 255. 
//  In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, 
//  with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0
// . Write a program that converts RGB color to CMYK color as per the following formulae:
#include <stdio.h>
double max(double a,double b,double c){
    if(a > b && a > c) return a;
    if(b > a && b > c) return b;
    return c;
}
int main() {
    int red, green, blue;
    printf("Enter Red (0-255): ");
    scanf("%d", &red);
    printf("Enter Green (0-255): ");
    scanf("%d", &green);
    printf("Enter Blue (0-255): ");
    scanf("%d", &blue);

    if (red < 0 || red > 255 || green < 0 || green > 255 || blue < 0 || blue > 255) {
        printf("Invalid RGB values. Please enter values between 0 and 255.\n");
        return 1;
    }

    if (red == 0 && green == 0 && blue == 0) {
        printf("Cyan: 0.0, Magenta: 0.0, Yellow: 0.0, Black: 1.0\n");
        return 0;
    }

    double r = red / 255.0;
    double g = green / 255.0;
    double b = blue / 255.0;
    double white = max(r,g,b);
    double cyan = 0.0;
    if(white != 0.0) cyan =(white - r) / white;
    double magenta = 0;
    if(magenta != 0.0) magenta = (white - g) / white;
    double yellow = 0.0;
    if(white != 0.0) yellow = (white - b) / white;
    double black = 1.0 - white;
    printf("%f %f %f",r,g,b);
    printf("Cyan: %.2f\n", cyan);
    printf("Magenta: %.2f\n", magenta);
    printf("Yellow: %.2f\n", yellow);
    printf("Black: %.2f\n", black);

    return 0;
}
