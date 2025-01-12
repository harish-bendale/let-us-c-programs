// Any year is entered through the keyboard. Write a function to 
// determine whether the year is a leap year or not.
#include<stdio.h>
#include<stdbool.h>
bool isLeap(int year){
    if((year%100 == 0 && year%400 == 0) || (year%4 == 0 && year%100 != 0)) return true; 
    return false;
}
int main(){
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    if(isLeap(year)){
        printf("%d year is leap year\n",year);
    }else{
        printf("%d year is not a leap year\n",year);
    }

}