// Write a program to check whether a triangle is valid or not, if three 
// angles of the triangle are entered through the keyboard. A triangle 
// is valid if the sum of all the three angles is equal to 180 degrees.
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum = a+b+c;
    if(sum != 180){
        printf("Triangle is not valid\n");
    }else{
        printf("Triangle is valid\n");
    }
}