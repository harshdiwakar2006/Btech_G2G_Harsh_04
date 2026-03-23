#include <stdio.h>
int find(int a[]){
    int n = 5, c = 0;
    for (int i = 0; i < n; i++){
        c = c + a[i];
    }
    return c;
}
int main(){
    int a[5] = {1,4,3,5,6};
    int b = find(a);
    float c = (float)b/5;
    printf("%d\n%f",b,c);
    return 0;
}