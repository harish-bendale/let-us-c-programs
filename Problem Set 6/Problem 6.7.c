// write a program for ramanujan number
#include <stdio.h>

int main() {
    int limit;

    printf("Enter the limit for Ramanujan numbers: ");
    scanf("%d", &limit);

    printf("Ramanujan numbers up to %d:\n", limit);

    for(int a=1;a<=limit;a++){
        for(int b=1;b<=limit;b++){
            for(int c = 1;c<=limit;c++){
                for(int d=1;d<=limit;d++){
                    if(a == 1 && b == 12 && c == 9 && d == 10){
                        printf("Number \n");
                    }
                    if(!(a != b && a != c && a != d && b != c && b != d && c!= d)){
                        continue;
                    }
                    if(a*a*a + b*b*b == c*c*c + d*d*d){
                        printf("%d %d %d %d %d\n",a,b,c,d,a*a*a+b*b*b);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
