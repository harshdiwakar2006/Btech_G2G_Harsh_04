#include<math.h>
#include<stdio.h>
int main(){
    float a,b,c,SI,CI;
    printf("Enter principle amount : ");
    scanf("%f",&a);
    printf("Enter interest rate : ");
    scanf("%f",&b);
    printf("Enter Time period  : ");
    scanf("%f",&c);
    SI = (a*b*c)/100;
    CI = a*pow((1+b/100),c)-a;
    printf("Simple interest = %f \n",SI);
    printf("Compound Intrest = %f",CI);
    return 0;
    
}