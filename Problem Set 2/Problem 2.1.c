//If lengths of three sides of a triangle are input through the keyboard, 
//write a program to find the area of the triangle.
// Using Euclidean distance formula
#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    scanf("%f%f%f",&a,&b,&c);
    float sum = (a+b+c)/2;
    float ans = sqrt(sum * (sum-a) *(sum-b) * (sum-c));
    printf("Area of the triangel is %f",ans);
    return 0;
}