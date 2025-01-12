// A positive integer is entered through the keyboard, write a function 
// to find the binary equivalent of this number: 
// (1) Without using recursion 
// (2) Using recursion
#include<stdio.h>
void reverse(char *ans,int start,int end){
    while(start <= end){
        char t = ans[start];
        ans[start] = ans[end];
        ans[end] = t;
        start++; end--;
    }
}
void withRecusionBinary(long long int number,int *index,char *str){
    if(number <= 0){
        return ;
    }
    if(number&1) str[*index] = '1';
    else str[*index] = '0';
    (*index)++;
    number >>=1;
    withRecusionBinary(number,index,str);
}
void withoutrecursionBinary(long long int number){
    long long int number_temp = number;
    char ans[100];
    int index = 0;
    while(number_temp){
        if(number_temp&1) ans[index++] = '1';
        else ans[index++] = '0';
        number_temp = number_temp>>1;
    }
    ans[index] = '\0';
    reverse(ans,0,index-1);
    printf("Binary Number %s\n",ans);
}
int main(){
    printf("Enter the number\n");
    long long int number;
    scanf("%lld",&number);
    withoutrecursionBinary(number);
    int index = 0;
    char str[100000];
    withRecusionBinary(number,&index,str);
    str[index] = '\0';
    reverse(str,0,index-1);
    printf("Binary number %s\n",str);
    return 0;
}