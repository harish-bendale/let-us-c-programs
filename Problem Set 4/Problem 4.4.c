// The Body Mass Index (BMI) is defined as ratio of the weight of a 
// person (in kilograms) to the square of the height (in meters). Write 
// a program that receives weight and height, calculates the BMI, and 
// reports the BMI category as per the following table:
#include<stdio.h>
int main(){
    double weight, height;
    printf("Enter the weight :- \n");
    scanf("%lf",&weight);
    printf("Enter the height :- \n");
    scanf("%lf",&height);
    double sq = (height * height);
    double BMI = (weight)/ (sq);
    printf("BMI of the person is : %.2lf\n",BMI);

    if(BMI < 15.0){
        printf("Starvation\n");
    }else if(15.1 <= BMI && BMI <= 17.5){
        printf("Anorexic\n");
    }else if(17.6 <= BMI && BMI <= 18.5){
        printf("Underweight\n");
    }else if(18.6 <= BMI && BMI <= 24.9){
        printf("Ideal\n");
    }else if(25 <= BMI && BMI <= 25.9){
        printf("Overweight\n");
    }else if(30.0 <= BMI && BMI <= 30.9){
        printf("Obese\n");
    }else{
        printf("Morbidly Obese\n");
    }
    return 0;
}