// find area of triangle Area = 1/2 * a* b * sin(angle)
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Enter the sides of triagle and angle\n");
        double a,b;
        double angle;
        scanf("%lf%lf%lf",&a,&b,&angle);
        double area = 0;
        double radians = angle * (M_PI / 180.0);
        area = 0.5 * a * b * sin(radians);
        printf("Area of the triagle is %lf\n",area);
    }
   
}