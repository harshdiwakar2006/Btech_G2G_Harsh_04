#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,d=0,e,n1,f;
    printf("enter the no. : ");
    scanf("%d",&n);
    e=n;
    n1=e;
    while (e != 0){
        e = e/10;
        c++;
    }
    e=n;
    while (e != 0)
    {
        f = e%10;
        d += pow(f,c);
        e/=10;
    }
    if (d == n1){
        printf("It is a Armstrong no. ");
    }
    else{
        printf("It is not a Armstrong no. ");
    }
    return 0;
    
}