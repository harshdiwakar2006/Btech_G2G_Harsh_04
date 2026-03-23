#include <stdio.h>
float series(int n){
    float c = 0;
    for (int i = 1; i <= n; i++){
        c=c+1.0/i;
    }
    return c;
}
int main(){
    int n;
    printf("enter the no. of terms : ");
    scanf("%d",&n);
    printf("%f",series(n));
    return 0;
}