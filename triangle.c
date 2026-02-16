#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b==c){
        printf("it is a equilateral triangle");
    }
    else if (a!=b!=c){
        printf("it is a scalar triangle");
    }
    else {
        printf("it is a isosceles");
    }
    return 0;
}