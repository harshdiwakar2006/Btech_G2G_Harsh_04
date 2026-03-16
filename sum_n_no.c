#include <stdio.h>
int sum(int b){
    int c = 0,i;
    for (i = 1; i<=b; i++){
        c = c+i;
    }
    return c;
}
int main(){
    int a;
    printf("enter the no. : ");
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}