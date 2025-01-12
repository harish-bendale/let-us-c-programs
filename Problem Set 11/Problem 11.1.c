// Twenty-five numbers are entered from the keyboard into an array. 
// Write a program to find out how many of them are positive, how 
// many are negative, how many are even and how many odd.
#include<stdio.h>
int main(){
    int zeros = 0,positive = 0,negative = 0, even = 0, odd = 0;
    for(int i=0;i<25;i++){
        int number;
        printf("Enter the %dth number\n",i+1);
        scanf("%d",&number);
        if(number < 0){
            negative++;
        }else if(number > 0){
            positive++;
        }else{
            zeros++;
        }
        if(number&1) odd++;
        else even++;
    }
    printf("Positive numbers %d\n",positive);
    printf("Negative numbers %d\n",negative);
    printf("Zeros numbers %d\n",zeros);
    printf("Even numbers %d\n",even);
    printf("Odd numbers %d\n",odd);
    return 0;
}