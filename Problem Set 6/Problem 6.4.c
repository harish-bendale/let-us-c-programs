// The natural logarithm can be approximated by the following series.
#include<stdio.h>
double power(double base,int power){
    double ans = 1.0;
    while(power){
        if(power&1){
            power -= 1;
            ans *= base;
        }else{
            power >>= 1;
            base *= base;
        }
    }
    return ans;
}
int main(){
    printf("Enter the value of x\n");
    double x;
    scanf("%lf",&x);
    double ans = 0.0;
    for(int i=0;i<7;i++){
        double t = (x-1)/x;
        if(i == 0){
            ans += t;
        }else{
            ans += 0.5*(power(t,i+1));
        }
    }
    printf("Value of natural algortihm after 7 series is %lf",ans);
}