// A certain grade of steel is graded according to the following conditions:
// (i) Hardness must be greater than 50 
// (ii) Carbon content must be less than 0.7 
// (iii) Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (i) and (ii) are met
// Grade is 8 if conditions (ii) and (iii) are met
// Grade is 7 if conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.
#include<stdio.h>
int main(){
    long int hardness,tensile_strength;
    double carbon;
    printf("Enter the hardness of the metal (integer) \n");
    scanf("%ld",&hardness);
    printf("Enter the carbon content of the metal (decimal)\n");
    scanf("%lf",&carbon);
    printf("Enter the tensile strength of the metal (integer)\n");
    scanf("%ld",&tensile_strength);
    int flag1 = 0,flag2 = 0, flag3 = 0;
    if(hardness > 50) flag1++;
    if(carbon < (double)0.7) flag2++;
    if(tensile_strength > 5600) flag3++;
    if(flag1 && flag2 && flag3){
        printf("Grade 10\n");
    }else if(flag1 && flag2){
        printf("Grade 9\n");
    }else if(flag2 && flag3){
        printf("Grade 8\n");
    }else if(flag1 && flag3){
        printf("Grade 7\n");
    }else if(flag1 || flag2 || flag3){
        printf("Grade 6\n");
    }else{
        printf("Grade 5\n");
    }
    int t = 0.6 < carbon;
    printf("%d",t);
}