#include<stdio.h>
int main(){
    char a;
    printf("enter the character : ");
    scanf("%c",&a);
    if ((a == 'A' || a == 'E' || a == 'I' || a=='O'|| a=='U')
    ||(a == 'a' || a == 'e' || a == 'i' || a=='o'|| a=='u')){
        printf("It is a vowel");
    }
    else{
        printf("it is a consonant ");
    }
    return 0;
}