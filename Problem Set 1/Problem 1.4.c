// Temperature of a city in Fahrenheit degrees is input through the 
// keyboard. Write a program to convert this temperature into 
// Centigrade degrees.
#include<stdio.h>
int main(){
    float temp;
    scanf("%f",&temp);
    float celcius_temp = (5.0/9.0)*(temp-32);
    printf("Temperature in celcius is %f\n",temp);
    printf("Temperature in centigrade is %f",celcius_temp);
}