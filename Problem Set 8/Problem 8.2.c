// Write a program to find the prime factors of a program
#include<stdio.h>
void primeFactors(long long int number){
    int limit = 1e6;
    long long int factors[limit];
    for(int i=0;i<limit;i++){
        factors[i] = i;
    }
    for(long long int i=2;i*i<=limit;i++){
        if(factors[i] == i){
            for(long long int j=i*i;j<=limit;j+=i){
                factors[j] = i;
            }
        }
    }
    while(number != 1){
        printf("%lld ",factors[number]);
        number = number/factors[number];
    }
}
int main(){
    long long int number;
    printf("Enter the number\n");
    scanf("%lld",&number);
    primeFactors(number);
    return 0;
}