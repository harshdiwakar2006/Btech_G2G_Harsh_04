#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value of a,b&c");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b-4*a*c;
    printf("the roots of equation %d",d);
    return 0;
}