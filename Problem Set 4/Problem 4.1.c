// (a) If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the 
// triangle is an isosceles, an equilateral, a scalene or a right-angled triangle.
#include<stdio.h>
int main(){
    int a , b, c;
    printf("Enter the sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a == b && b == c){
        printf("Triangle is equilateral triangle\n");
    }else if(a != b && b != c && a != c){
        printf("Triangle is scalene triangle\n");
    }else if((a == b) || (b == c) || (a == c)){
        printf("Triangle is isosceles triangle\n");
    }else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
        printf("Triangle is right angled triangle\n");
    }
    return 0;
}