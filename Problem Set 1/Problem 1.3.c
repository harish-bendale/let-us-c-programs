// If the marks obtained by a student in five different subjects are input 
// through the keyboard, write a program to find out the aggregate marks 
// and percentage marks obtained by the student. Assume that the 
// maximum marks that can be obtained by a student in each subject is 
// 100.
#include<stdio.h>
int main(){
    float sub1, sub2,sub3,sub4,sub5;
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    float sum = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = (sum/5);
    printf("Aggregate marks obtained by the student %f\n",sum);
    printf("Percentage obtained by the student is %f\n",percentage);
}