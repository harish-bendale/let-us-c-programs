// Consider a currency system in which there are notes of six 
// denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a 
// sum of Rs. N is entered through the keyboard, write a program to 
// compute the smallest number of notes that will combine to give Rs. N.
#include<stdio.h>
int main(){
    long int money;
    scanf("%ld",&money);
    int arr[6] = {1,2,5,10,50,100};
    int cnt = 0;
    while(money){
        for(int i=5;i>=0;i--){
            if(money >= arr[i]){
                int count = (money/arr[i]);
                money = money%arr[i];
                cnt += count;
            }
        }
    }
    printf("Number of smallest notes that can make up money are %d",cnt);
}