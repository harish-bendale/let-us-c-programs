// Write a program to receive value of an angle in degrees and check 
// whether sum of squares of sine and cosine of this angle is equal to 
// 1.
#include<stdio.h>
#include<math.h>
int main(){
    double angle, radians,sum;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);
    radians = (angle * M_PI)/180.0;

    sum = pow(sin(radians),2) + pow(cos(radians),2);
    printf("sum %lf\n",sum);

    if(sum == 1){
        printf("THe sum of squares of sine and cosine of the angle is 1\n");
    }else{
        printf("THe sum of squares of sine and cosine of the angle is not 1\n");

    }
}