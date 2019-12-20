#include<stdio.h>

int main(){
    int a = 14,b =3;

    printf("%d\n",a%b);
    printf("%d\n",a%10);
    a = a/10;
    printf("%d\n",a);

    return 0;
}