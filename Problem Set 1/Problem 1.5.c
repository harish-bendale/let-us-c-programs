// The length and breadth of a rectangle and radius of a circle are 
// input through the keyboard. Write a program to calculate the area 
// and perimeter of the rectangle, and the area and circumference of 
// the circle.
#include<stdio.h>
const float PI = 3.141592653589793238460;
int main(){
    float length, breadth, radius;
    printf("Enter the length breadth of the rectangle \n");
    scanf("%f%f",&length,&breadth);
    printf("Enter the radius of the cirle\n");
    scanf("%f",&radius);
    float perimeter_of_rectangle = 2*(length+breadth);
    float area_of_rectangle = (length*breadth);
    float area_of_circle = PI * radius * radius;
    float circumfernece_of_circle = 2*PI*radius;
    printf("Perimeter of rectangle is %f\n",perimeter_of_rectangle);
    printf("Area of rectangle is %f\n",area_of_rectangle);
    printf("Area of circle is %f\n",area_of_circle);
    printf("Circumference of circle is %f\n",circumfernece_of_circle);
    return 0;
}