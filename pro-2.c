#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g;
    printf("enter marks of all 5 subject out of 100 : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    f = a+b+c+d+e;
    g = f/5;
    printf("percentage is : %f",g);
    return 0;
}