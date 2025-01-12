// Write a program to print 24 hours of day with suitable suffixes like
// AM, PM, Noon and Midnight.
#include<stdio.h>
int main(){
    for(int hour = 1;hour<=24;hour++){
        if(hour == 24){
            printf("12 Midnight\n");
        }else if(hour < 12){
            printf("%d AM\n",hour);
        }else if(hour == 12){
            printf("12 Afternoon\n");
        }else{
            printf("%d PM\n",hour-12);
        }
    }
    return 0;
}