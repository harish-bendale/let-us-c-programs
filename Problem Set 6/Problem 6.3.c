// (c) When interest compounds q times per year at an annual rate of r% for n years, the principal p compounds to an amount a as per the following formula a=p (1+r/q)nd
// Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
#include<stdio.h>
double power(double base,int power){
    double ans = 1.0;
    while(power){
        if(power&1){
            power-=1;
            ans *= base;
        }else{
            base *= base;
            power>>=1;
        }
    }
    return ans;
}
int main(){
    int p,q,r,n;
    for(int i=0;i<10;i++){
        printf("Enter the p q n r values respectively\n");
        scanf("%d%d%d%d",&p,&q,&n,&r);
        double rate = (double)(r/100.0);
        double ans = p * power((1+(rate/q)),n*q);
        printf("%lf",ans);
    }
}