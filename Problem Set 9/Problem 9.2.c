// Define a function that receives weight of a commodity in Kilograms 
// and returns the equivalent weight in Grams, Tons and Pounds. Call 
// this function from main( ) and print the results in main( ).
#include<stdio.h>
void convertWeight(double kg, double *grams, double *tons, double *pounds) {
    *grams = kg * 1000;        
    *tons = kg / 1000;        
    *pounds = kg * 2.20462;   
}
int main(){
    double weightKg, grams, tons, pounds;

    printf("Enter the weight in kg ");
    scanf("%lf", &weightKg);

    convertWeight(weightKg, &grams, &tons, &pounds);
    printf("%lfkg  %lfg  %lfton  %lfpound",weightKg,grams,tons,pounds);
    return 0;
}