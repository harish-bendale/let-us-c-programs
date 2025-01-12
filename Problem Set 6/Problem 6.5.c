// Write a program to generate all Pythagorean Triplets with side length less than or equal to 30.
#include<stdio.h>
int main(){
    int limit = 30;
    printf("Pythagorean triplet with side lengths <= %d\n",limit);

    for(int a = 1;a<=limit;a++){
        for(int b=a;b<=limit;b++){
            for(int c=b;c<=limit;c++){
                if(a*a + b*b == c*c){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}