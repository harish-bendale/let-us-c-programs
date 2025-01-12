// According to a study, the approximate level of intelligence of a 
// person can be calculated using the following formula: 
// i = 2 + ( y + 0.5 x )
#include<stdio.h>
int main(){
    float y = 1; 
    float x = 5.5;
    printf("i     x     y\n");
    while(y <= 6.0){
        float i = 2 + (y + 0.5 * x);
        printf("%.2f  %.2f %.2f\n",i,x,y);
        y += 0.5;
        x += 0.5;
    }
    return 0;
}