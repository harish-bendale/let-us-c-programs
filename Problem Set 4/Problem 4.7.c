// Write a program to find the greatest of the three numbers entered 
// through the keyboard. Use conditional operators.
#include<stdio.h>
int main(){
   long int a,b,c;
   printf("Enter the three numbers \n");
   scanf("%ld%ld%ld",&a,&b,&c);
   long int greatest;
   greatest = (a > b ? (a > c ? a : c) : ((b > c) ? b : c));
   printf("Greatest number among the three is %ld",greatest);
}