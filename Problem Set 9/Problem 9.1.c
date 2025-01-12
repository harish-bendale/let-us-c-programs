// Given three variables x, y, z, write a function to circularly shift their 
// values to right. In other words, if x = 5, y = 8, z = 10, after circular 
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to 
// circularly shift values.
#include<stdio.h>
void circularShift(int *x,int *y,int *z){
    int t = *x;
    *x = *z;
    *z = *y;
    *y = t;
}
int main(){
    int x = 5, y = 8, z = 10;
    printf("Before circular shift x =%d, y = %d, z = %d\n",x,y,z);
    for(int i=0;i<=10;i++){
        circularShift(&x,&y,&z);
        printf("After circular shift %d numbers are x = %d y = %d z = %d\n",i+1,x,y,z);
    }
}