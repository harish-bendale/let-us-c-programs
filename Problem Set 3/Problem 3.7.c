// Given the coordinates (x, y) of center of a circle and its radius, write 
// a program that will determine whether a point lies inside the circle, 
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,radius,p,q;
    printf("Centre of the circle\n");
    scanf("%d%d",&x,&y);
    printf("Radius of the circle\n");
    scanf("%d",&radius);
    printf("Enter X and Y co-ordinates of a point to be check \n");
    scanf("%d%d",&p,&q);
    int distance_point = sqrt((p-x)*(p-x) + (q-y)*(q-y));
    if(distance_point == radius){
        printf("Point is on the circle \n");
    }else if(distance_point < radius){
        printf("Point is inside the circle \n");
    }else{
        printf("Point is outside the circle \n");
    }
}