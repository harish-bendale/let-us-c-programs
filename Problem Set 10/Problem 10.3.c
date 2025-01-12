// 
#include<stdio.h>
int solve(int n,char source,char auxilary,char destination){
    if(n == 0){
        printf("Move disk 1 from %c to %c\n", source, destination);
        return 0;
    }
    printf("Move disk %d from %c to %c\n", n, source, destination);
    return 1+ solve(n-1,source,destination,auxilary) + solve(n-1,auxilary,source,destination);
}
int main(){
    printf("Number of moves required %d\n",solve(3,'A','B','C'));
}