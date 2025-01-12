// Write a program using conditional operators to determine whether 
// a year entered through the keyboard is a leap year or not.
#include<stdio.h>
int main(){
    long int year;
    printf("Enter the year : \n");
    scanf("%ld",&year);
    if((year >= 1000 && year%400 == 0) || (year%4 == 0)){
        printf("Year is Leap year \n");
    }else{
        printf("Year is not a leap year");
    }
}