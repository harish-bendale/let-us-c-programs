// Write a program to enter numbers till the user wants. At the end it 
// should display the count of positive, negative and zeros entered.
#include<stdio.h>
int main(){
    int positive = 0, negative = 0, zeros = 0;
    char ch;
    do{
        long int number;
        printf("Enter the number \n");
        scanf("%ld",&number);
        if(number < 0){
            negative++;
        }else if(number > 0){
            positive++;
        }else{
            zeros++;
        }
        printf("Do you want to continue to give input ? \n");
        
        scanf(" %c",&ch);
    }while((ch == 'Y' || ch == 'y'));
    printf("Positive numbers entered %d\n",positive);
    printf("Negative numbers entered %d\n",negative);
    printf("Zero numbers entered %d\n",zeros);
}