#include <stdio.h>
int find(int a[]){
    int n = 5, c = 0, d = 0;
    for (int i = 0; i < n; i++){
        if(a[i]%2 == 0){
            c++;
        }
        else {
            d++;}
    }
    return c;
}
int main(){
    int a[5] = {1,4,3,5,6};
    printf("%d\n%d",find(a),5-find(a));
    return 0;
}