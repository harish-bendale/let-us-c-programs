// According to Gregorian calendar, it was Monday on the date 
// 01/01/01. If any year is input through the keyboard write a program 
// to find out what is the day on 1st January of this year.
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    int base_year = 1;
    int base_day = 1;
    int days = 0;
    for(int i=base_year;i<year;i++){
        if((i%400 == 0) || (i%4 == 0 && i%100 != 0)){
            days += 366;
        }else{
            days += 365;
        }
    }
    int day_of_week = (days + base_day)%7;
    if(day_of_week == 0){
        printf("Day is Sunday\n");
    }else if(day_of_week == 1){
        printf("Day is Monday\n");
    }else if(day_of_week == 2){
        printf("Day is Tuesday\n");
    }else if(day_of_week == 3){
        printf("Day is Wednesday\n");
    }else if(day_of_week == 4){
        printf("Day is Thursday\n");
    }else if(day_of_week == 5){
        printf("Day is Friday\n");
    }else{
        printf("Day is Saturrday\n");
    }
    return 0;
}